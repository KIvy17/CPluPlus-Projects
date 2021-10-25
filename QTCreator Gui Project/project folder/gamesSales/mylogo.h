#ifndef MYLOGO_H
#define MYLOGO_H

#include <QWidget>

namespace Ui {
class MyLogo;
}

class MyLogo : public QWidget
{
    Q_OBJECT

public:
    explicit MyLogo(QWidget *parent = nullptr);
    ~MyLogo();

    protected:
    void paintEvent(QPaintEvent* event) override;

private:
    Ui::MyLogo *ui;
};

#endif // MYLOGO_H
