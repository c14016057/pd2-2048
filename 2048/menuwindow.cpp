#include "menuwindow.h"
#include "ui_menuwindow.h"

menuwindow::menuwindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::menuwindow)
{
    ui->setupUi(this);
}

menuwindow::~menuwindow()
{
    delete ui;
}

void menuwindow::on_keepgoing_clicked()
{
    emit keep_going();
}

void menuwindow::on_newgame_clicked()
{
    emit new_game();
}
