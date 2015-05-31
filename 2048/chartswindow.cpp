#include "chartswindow.h"
#include "ui_chartswindow.h"

chartswindow::chartswindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::chartswindow)
{
    ui->setupUi(this);
}

chartswindow::~chartswindow()
{
    delete ui;
}
void chartswindow::setcharts(int n,int score){
    if(n==1) ui->lcdNumber->display(score);
    else if(n==2) ui->lcdNumber_2->display(score);
    else if(n==3) ui->lcdNumber_3->display(score);
    else if(n==4) ui->lcdNumber_4->display(score);
    else if(n==5) ui->lcdNumber_5->display(score);
    else if(n==6) ui->lcdNumber_6->display(score);
    else if(n==7) ui->lcdNumber_7->display(score);
    else if(n==8) ui->lcdNumber_8->display(score);
    else if(n==9) ui->lcdNumber_9->display(score);
    else if(n==10) ui->lcdNumber_10->display(score);

}

void chartswindow::on_pushButton_clicked()
{
    emit keep_going();
}
