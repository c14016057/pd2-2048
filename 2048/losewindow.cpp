#include "losewindow.h"
#include "ui_losewindow.h"

losewindow::losewindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::losewindow)
{
    ui->setupUi(this);
}

losewindow::~losewindow()
{
    delete ui;
}

void losewindow::on_keepgoingButton_clicked()
{
    emit keep_going();
}

void losewindow::on_newgameButton_clicked()
{
    emit new_game();
}
void losewindow::setScore(int n){
    ui->lcdNumber->display(n);
}
