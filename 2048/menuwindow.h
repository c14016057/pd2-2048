#ifndef MENUWINDOW_H
#define MENUWINDOW_H

#include <QWidget>
namespace Ui {
class menuwindow;
}

class menuwindow : public QWidget
{
    Q_OBJECT

public:
    explicit menuwindow(QWidget *parent = 0);
    ~menuwindow();
signals:
    void keep_going();
    void new_game();
private slots:

    void on_keepgoing_clicked();

    void on_newgame_clicked();

private:
    Ui::menuwindow *ui;
};

#endif // MENUWINDOW_H
