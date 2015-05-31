#include "winwindow.h"
#include "ui_winwindow.h"

winwindow::winwindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::winwindow)
{
    ui->setupUi(this);

}

winwindow::~winwindow()
{
    delete ui;
}

void winwindow::on_keepgoingButton_clicked()
{
    emit keep_going();
}

void winwindow::on_newgameButton_clicked()
{
    emit new_game();
}
void winwindow::setScore(int score){
    ui->lcdNumber->display(score);
}
