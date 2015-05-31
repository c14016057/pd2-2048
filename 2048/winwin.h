#ifndef WINWIN_H
#define WINWIN_H

#include <QWidget>

namespace Ui {
class winwin;
}

class winwin : public QWidget
{
    Q_OBJECT

public:
    explicit winwin(QWidget *parent = 0);
    ~winwin();

private:
    Ui::winwin *ui;
};

#endif // WINWIN_H
