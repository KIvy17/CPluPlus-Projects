#include "mylogo.h"
#include "ui_mylogo.h"

#include <QPainter>

MyLogo::MyLogo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyLogo)
{
    ui->setupUi(this);

}

MyLogo::~MyLogo()
{
    delete ui;
}

void MyLogo::paintEvent(QPaintEvent* event)
{
    QPainter painter(this);

    painter.setRenderHints(QPainter::Antialiasing | QPainter::TextAntialiasing, true);

    // draw background
    QBrush backGr(Qt::GlobalColor::darkMagenta);
    painter.setBrush(backGr);
    painter.drawRect( QRect(0, 0, width() - 1, height() - 1) );
    QBrush figBrush(Qt::GlobalColor::darkCyan);
    painter.setBrush(figBrush);
    QPen figPen(Qt::GlobalColor::blue);
    painter.setPen(figPen);
    painter.drawEllipse(10, 10, width() - 20, height() - 20);
    figPen.setColor(Qt::yellow);
    painter.setBrush(Qt::darkYellow);
    painter.setPen(figPen);
    //QPointF(qrand() % 400, qrand() % 400),QPointF(qrand() % 400,qrand() % 400)
    painter.drawEllipse(QPointF(qrand() % 250,qrand() % 250),10, 10);

}
