#ifndef SQUARE_H
#define SQUARE_H
#include <QObject>
#include <QLabel>
//class QLabel;
class square : public QObject
{
    Q_OBJECT
public:
    explicit square(QWidget *parent,int Col,int Row,int Number);
    void setChange(int col,int row,int number);
    void setshow();
    void sethide();
signals:

public slots:

private:
    QLabel *numberblock;
    int col;
    int row;
    int number;

};

#endif // SQUARE_H
