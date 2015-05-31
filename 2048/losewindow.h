#ifndef LOSEWINDOW_H
#define LOSEWINDOW_H

#include <QWidget>

namespace Ui {
class losewindow;
}

class losewindow : public QWidget
{
    Q_OBJECT

public:
    explicit losewindow(QWidget *parent = 0);
    ~losewindow();
    void setScore(int n);
signals:
    void keep_going();
    void new_game();
private slots:
    void on_keepgoingButton_clicked();

    void on_newgameButton_clicked();

private:
    Ui::losewindow *ui;
};

#endif // LOSEWINDOW_H
