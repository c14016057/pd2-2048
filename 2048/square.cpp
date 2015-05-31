#include "square.h"

square::square(QWidget *parent,int Row,int Col,int Number) : QObject(parent)
{
    row=Row;
    col=Col;
    number=Number;
    numberblock=new QLabel(parent);
    numberblock->setGeometry(112*col+12,112*row+12,100,100);
    if(number==0) numberblock->setPixmap(QPixmap(":/0.png"));
    else if(number==2) numberblock->setPixmap(QPixmap(":/2.png"));
    else if(number==4) numberblock->setPixmap(QPixmap(":/4.png"));
    else if(number==8) numberblock->setPixmap(QPixmap(":/8.png"));
    else if(number==16) numberblock->setPixmap(QPixmap(":/16.png"));
    else if(number==32) numberblock->setPixmap(QPixmap(":/32.png"));
    else if(number==64) numberblock->setPixmap(QPixmap(":/64.png"));
    else if(number==128) numberblock->setPixmap(QPixmap(":/128.png"));
    else if(number==256) numberblock->setPixmap(QPixmap(":/256.png"));
    else if(number==512) numberblock->setPixmap(QPixmap(":/512.png"));
    else if(number==1024) numberblock->setPixmap(QPixmap(":/1024.png"));
    else numberblock->setPixmap(QPixmap(":/2048.png"));
}
void square::setChange(int Row,int Col,int Number){
    row=Row;
    col=Col;
    number=Number;
    numberblock->setGeometry(112*col+12,112*row+12,100,100);
    if(number==0) numberblock->setPixmap(QPixmap(":/0.png"));
    else if(number==2) numberblock->setPixmap(QPixmap(":/2.png"));
    else if(number==4) numberblock->setPixmap(QPixmap(":/4.png"));
    else if(number==8) numberblock->setPixmap(QPixmap(":/8.png"));
    else if(number==16) numberblock->setPixmap(QPixmap(":/16.png"));
    else if(number==32) numberblock->setPixmap(QPixmap(":/32.png"));
    else if(number==64) numberblock->setPixmap(QPixmap(":/64.png"));
    else if(number==128) numberblock->setPixmap(QPixmap(":/128.png"));
    else if(number==256) numberblock->setPixmap(QPixmap(":/256.png"));
    else if(number==512) numberblock->setPixmap(QPixmap(":/512.png"));
    else if(number==1024) numberblock->setPixmap(QPixmap(":/1024.png"));
    else numberblock->setPixmap(QPixmap(":/2048.png"));
}
void square::setshow(){
    numberblock->show();
}
void square::sethide(){
    numberblock->hide();
}
