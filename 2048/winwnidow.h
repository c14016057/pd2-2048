#ifndef WINWNIDOW_H
#define WINWNIDOW_H

#include <QDialog>

namespace Ui {
class winwnidow;
}

class winwnidow : public QDialog
{
    Q_OBJECT

public:
    explicit winwnidow(QWidget *parent = 0);
    ~winwnidow();

private:
    Ui::winwnidow *ui;
};

#endif // WINWNIDOW_H
