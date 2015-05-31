#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H
#include<QtGui>
#include <QWidget>
#include "square.h"
#include"menuwindow.h"
#include"winwindow.h"
#include"losewindow.h"
#include"chartswindow.h"
#include<QSound>
struct node{
    int score;
    struct node *link;
};
namespace Ui {
class gamewindow;
}

class gamewindow : public QWidget
{
    Q_OBJECT

public:
    explicit gamewindow(QWidget *parent = 0);
    ~gamewindow();
    void keyPressEvent(QKeyEvent *event);

private slots:
    void on_menuButton_clicked();
    void keepgoinggame();
    void newgame();
    void on_chartsButton_clicked();

private:
    menuwindow *gamemenu;
    winwindow *gamewinwindow;
    losewindow *gamelosewindow;
    chartswindow *gamechartswindow;
    void checkwin();
    void boradupdate();
    void give_a_number();
    void checklose();
    void addnode(struct node *alist,struct node *addnode);
    void checkbestscore();
    Ui::gamewindow *ui;
    square *square_00;
    square *square_01;
    square *square_02;
    square *square_03;
    square *square_10;
    square *square_11;
    square *square_12;
    square *square_13;
    square *square_20;
    square *square_21;
    square *square_22;
    square *square_23;
    square *square_30;
    square *square_31;
    square *square_32;
    square *square_33;
    int number_matrix[4][4];
    int score;
    int bestscore;
    int win;
    struct node* first;
};

#endif // GAMEWINDOW_H
