#ifndef CHARTSWINDOW_H
#define CHARTSWINDOW_H

#include <QWidget>

namespace Ui {
class chartswindow;
}

class chartswindow : public QWidget
{
    Q_OBJECT

public:
    explicit chartswindow(QWidget *parent = 0);
    ~chartswindow();
    void setcharts(int n,int score);
signals:
    void keep_going();
private slots:
    void on_pushButton_clicked();

private:
    Ui::chartswindow *ui;
};

#endif // CHARTSWINDOW_H
