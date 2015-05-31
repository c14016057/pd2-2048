#include "winwnidow.h"
#include "ui_winwnidow.h"

winwnidow::winwnidow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::winwnidow)
{
    ui->setupUi(this);
}

winwnidow::~winwnidow()
{
    delete ui;
}
