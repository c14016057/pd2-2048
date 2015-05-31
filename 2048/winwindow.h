#ifndef WINWINDOW_H
#define WINWINDOW_H

#include <QWidget>

namespace Ui {
class winwindow;
}

class winwindow : public QWidget
{
    Q_OBJECT

public:
    explicit winwindow(QWidget *parent = 0);
    ~winwindow();
    void setScore(int n);
signals:
    void keep_going();
    void new_game();

private slots:
    void on_keepgoingButton_clicked();

    void on_newgameButton_clicked();

private:
    Ui::winwindow *ui;
};

#endif // WINWINDOW_H
