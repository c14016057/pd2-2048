#include "gamewindow.h"
#include "ui_gamewindow.h"
#include<ctime>
#include<cstdlib>
#include<fstream>
using namespace std;
gamewindow::gamewindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::gamewindow),score(0),bestscore(0),win(0)
{
    ui->setupUi(this);
    //create charts
    ifstream readfile("charts.txt",ios::in);
    first=new struct node;
    first->score=0;
    first->link=NULL;
    int charts;
    while(readfile>>charts){
      struct node *temp;
      temp=new struct node;
      temp->score=charts;
      temp->link=NULL;
      addnode(first,temp);
    }
    readfile.close();
    if(first->link) bestscore=first->link->score;
    ui->lcdbest->display(bestscore);
    gamemenu=new menuwindow;
    gamewinwindow=new winwindow;
    gamelosewindow=new losewindow;
    gamechartswindow=new chartswindow;
    connect(gamemenu,SIGNAL(keep_going()),this,SLOT(keepgoinggame()));
    connect(gamemenu,SIGNAL(new_game()),this,SLOT(newgame()));
    connect(gamewinwindow,SIGNAL(keep_going()),this,SLOT(keepgoinggame()));
    connect(gamewinwindow,SIGNAL(new_game()),this,SLOT(newgame()));
    connect(gamelosewindow,SIGNAL(keep_going()),this,SLOT(keepgoinggame()));
    connect(gamelosewindow,SIGNAL(new_game()),this,SLOT(newgame()));
    connect(gamechartswindow,SIGNAL(keep_going()),this,SLOT(keepgoinggame()));
    square_00=new square(ui->gameborad,0,0,0);
    square_01=new square(ui->gameborad,0,1,0);
    square_02=new square(ui->gameborad,0,2,0);
    square_03=new square(ui->gameborad,0,3,0);
    square_10=new square(ui->gameborad,1,0,0);
    square_11=new square(ui->gameborad,1,1,0);
    square_12=new square(ui->gameborad,1,2,0);
    square_13=new square(ui->gameborad,1,3,0);
    square_20=new square(ui->gameborad,2,0,0);
    square_21=new square(ui->gameborad,2,1,0);
    square_22=new square(ui->gameborad,2,2,0);
    square_23=new square(ui->gameborad,2,3,0);
    square_30=new square(ui->gameborad,3,0,0);
    square_31=new square(ui->gameborad,3,1,0);
    square_32=new square(ui->gameborad,3,2,0);
    square_33=new square(ui->gameborad,3,3,0);
    int i,j;
    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
            number_matrix[i][j]=0;
    give_a_number();
    boradupdate();

}
gamewindow::~gamewindow()
{
    ofstream out("charts.txt",ios::out);
    while(first->link){
        out<<first->link->score<<endl;
        first=first->link;
    }
    out.close();
    delete ui;
}
void gamewindow::keyPressEvent(QKeyEvent *event)
{
    int i,j;
    int change=1;
    int suport_matrix[4][4];
    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
            suport_matrix[i][j]=0;
    int give_or_not=0;
    if (event->key()==Qt::Key_Left) {
        while(change){
            change=0;
          for(i=0;i<4;i++)
              for(j=1;j<4;j++){
                  if(number_matrix[i][j-1]!=number_matrix[i][j]&&number_matrix[i][j-1]!=0&&number_matrix[i][j]!=0&&!suport_matrix[i][j-1])
                         suport_matrix[i][j-1]=1;
                  else if(number_matrix[i][j-1]==number_matrix[i][j]&&number_matrix[i][j]!=0&&!suport_matrix[i][j-1])
                         {number_matrix[i][j-1]=number_matrix[i][j-1]*2;
                          number_matrix[i][j]=0;
                          change=1;
                          give_or_not=1;
                          suport_matrix[i][j-1]=1;
                          QSound::play(":/two.wav");}
                  else if(!number_matrix[i][j-1]&&number_matrix[i][j]!=0)
                         {number_matrix[i][j-1]=number_matrix[i][j];
                          number_matrix[i][j]=0;
                          change=1;
                          give_or_not=1;
                          }
                }
        }
        if(give_or_not) {give_a_number();
                         QSound::play(":/one.wav");}
        boradupdate();
        checkbestscore();
        checkwin();
        checklose();

      }
    else if (event->key()==Qt::Key_Right) {
        while(change){
            change=0;
          for(i=0;i<4;i++)
              for(j=2;j>-1;j--){
                  if(number_matrix[i][j+1]!=number_matrix[i][j]&&number_matrix[i][j+1]!=0&&number_matrix[i][j]!=0&&!suport_matrix[i][j+1])
                         suport_matrix[i][j+1]=1;
                  else if(number_matrix[i][j+1]==number_matrix[i][j]&&number_matrix[i][j]!=0&&!suport_matrix[i][j+1])
                         {number_matrix[i][j+1]=number_matrix[i][j+1]*2;
                          number_matrix[i][j]=0;
                          change=1;
                          give_or_not=1;
                          suport_matrix[i][j+1]=1;
                          QSound::play(":/two.wav");}
                  else if(!number_matrix[i][j+1]&&number_matrix[i][j]!=0)
                         {number_matrix[i][j+1]=number_matrix[i][j];
                          number_matrix[i][j]=0;
                          change=1;
                          give_or_not=1;
                          }
                }
        }
        if(give_or_not) {give_a_number();
                         QSound::play(":/one.wav");}
        boradupdate();
        checkbestscore();
        checkwin();
        checklose();
      }
    else if (event->key()==Qt::Key_Up) {
        while(change){
            change=0;
          for(j=0;j<4;j++)
              for(i=1;i<4;i++){
                  if(number_matrix[i-1][j]!=number_matrix[i][j]&&number_matrix[i-1][j]!=0&&number_matrix[i][j]!=0&&!suport_matrix[i-1][j])
                         suport_matrix[i-1][j]=1;
                  else if(number_matrix[i-1][j]==number_matrix[i][j]&&number_matrix[i][j]!=0&&!suport_matrix[i-1][j])
                         {number_matrix[i-1][j]=number_matrix[i-1][j]*2;
                          number_matrix[i][j]=0;
                          change=1;
                          give_or_not=1;
                          suport_matrix[i-1][j]=1;
                          QSound::play(":/two.wav");}
                  else if(!number_matrix[i-1][j]&&number_matrix[i][j]!=0)
                         {number_matrix[i-1][j]=number_matrix[i][j];
                          number_matrix[i][j]=0;
                          change=1;
                          give_or_not=1;
                          }
                }
        }
        if(give_or_not) {give_a_number();
                         QSound::play(":/one.wav");}
        boradupdate();
        checkbestscore();
        checkwin();
        checklose();
      }
    else if (event->key()==Qt::Key_Down) {
        while(change){
            change=0;
          for(j=0;j<4;j++)
              for(i=2;i>-1;i--){
                  if(number_matrix[i+1][j]!=number_matrix[i][j]&&number_matrix[i+1][j]!=0&&number_matrix[i][j]!=0&&!suport_matrix[i+1][j])
                         suport_matrix[i+1][j]=1;
                  else if(number_matrix[i+1][j]==number_matrix[i][j]&&number_matrix[i][j]!=0&&!suport_matrix[i+1][j])
                         {number_matrix[i+1][j]=number_matrix[i+1][j]*2;
                          number_matrix[i][j]=0;
                          change=1;
                          give_or_not=1;
                          suport_matrix[i+1][j]=1;
                          QSound::play(":/two.wav");}
                  else if(!number_matrix[i+1][j]&&number_matrix[i][j]!=0)
                         {number_matrix[i+1][j]=number_matrix[i][j];
                          number_matrix[i][j]=0;
                          change=1;
                          give_or_not=1;
                          }
                }
        }
        if(give_or_not) {give_a_number();
                         QSound::play(":/one.wav");}
        boradupdate();
        checkbestscore();
        checkwin();
        checklose();
      }

}
void gamewindow::boradupdate(){
    square_00->setChange(0,0,number_matrix[0][0]);
    square_01->setChange(0,1,number_matrix[0][1]);
    square_02->setChange(0,2,number_matrix[0][2]);
    square_03->setChange(0,3,number_matrix[0][3]);
    square_10->setChange(1,0,number_matrix[1][0]);
    square_11->setChange(1,1,number_matrix[1][1]);
    square_12->setChange(1,2,number_matrix[1][2]);
    square_13->setChange(1,3,number_matrix[1][3]);
    square_20->setChange(2,0,number_matrix[2][0]);
    square_21->setChange(2,1,number_matrix[2][1]);
    square_22->setChange(2,2,number_matrix[2][2]);
    square_23->setChange(2,3,number_matrix[2][3]);
    square_30->setChange(3,0,number_matrix[3][0]);
    square_31->setChange(3,1,number_matrix[3][1]);
    square_32->setChange(3,2,number_matrix[3][2]);
    square_33->setChange(3,3,number_matrix[3][3]);
}
void gamewindow::give_a_number(){
    int i,j,tow_or_four;
    srand(time(NULL));
    do{i=rand()%4;
       j=rand()%4;
    }while(number_matrix[i][j]);
    tow_or_four=rand()%2;
    number_matrix[i][j]=2+tow_or_four*2;
    score=score+2+tow_or_four*2;
    ui->lcdscore->display(score);
}

void gamewindow::on_menuButton_clicked()
{
 gamemenu->show();
 this->hide();
}
void gamewindow::keepgoinggame(){
    this->show();
    gamemenu->hide();
    gamewinwindow->hide();
    gamelosewindow->hide();
    gamechartswindow->hide();
}
void gamewindow::newgame(){
    score=0;
    win=0;
    int i,j;
    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
            number_matrix[i][j]=0;
    give_a_number();
    boradupdate();
    this->show();
    gamemenu->hide();
    gamewinwindow->hide();
    gamelosewindow->hide();
}

void gamewindow::on_chartsButton_clicked()
{
  int n=1;
  struct node *temp;
  temp=first;
  while(temp->link){
      gamechartswindow->setcharts(n,temp->link->score);
      temp=temp->link;
      n++;
  }
  gamechartswindow->show();
  this->hide();
}
void gamewindow::checkwin(){
    if(win) return;
    int i,j;
    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
            if(number_matrix[i][j]==2048)
            {win=1;
             gamewinwindow->setScore(score);
             gamewinwindow->show();
             this->hide();
             struct node *temp;
             temp=new struct node;
             temp->score=score;
             temp->link=NULL;
             addnode(first,temp);
             return;}
}
void gamewindow::checklose(){
    int i,j;
    int lose=1;
    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
            if(!number_matrix[i][j]) return;
    for(i=0;i<4;i++)
        for(j=0;j<3;j++)
            if(number_matrix[i][j]==number_matrix[i][j+1]) lose=0;
    for(j=0;j<4;j++)
        for(i=0;i<3;i++)
            if(number_matrix[i][j]==number_matrix[i+1][j]) lose=0;
    if(!lose) return;
    gamelosewindow->setScore(score);
    gamelosewindow->show();
    struct node *temp;
    temp=new struct node;
    temp->score=score;
    temp->link=NULL;
    addnode(first,temp);
    this->hide();
}
void gamewindow::addnode(struct node *alist,struct node *addnode){
  while(1){
      if(alist->link==NULL) {
          alist->link=addnode;
          return;
      }
      if(addnode->score>alist->link->score){
          addnode->link=alist->link;
          alist->link=addnode;
          return;
      }
      else alist=alist->link;
  }
}
void gamewindow::checkbestscore(){
    if(score>bestscore) {
        bestscore=score;
        ui->lcdbest->display(bestscore);
                        }
}
