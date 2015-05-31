#include "winwin.h"
#include "ui_winwin.h"

winwin::winwin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::winwin)
{
    ui->setupUi(this);
}

winwin::~winwin()
{
    delete ui;
}
