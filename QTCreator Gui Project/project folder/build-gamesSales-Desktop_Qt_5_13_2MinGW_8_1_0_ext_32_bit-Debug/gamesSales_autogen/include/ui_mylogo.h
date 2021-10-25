/********************************************************************************
** Form generated from reading UI file 'mylogo.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYLOGO_H
#define UI_MYLOGO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyLogo
{
public:

    void setupUi(QWidget *MyLogo)
    {
        if (MyLogo->objectName().isEmpty())
            MyLogo->setObjectName(QString::fromUtf8("MyLogo"));
        MyLogo->resize(287, 212);

        retranslateUi(MyLogo);

        QMetaObject::connectSlotsByName(MyLogo);
    } // setupUi

    void retranslateUi(QWidget *MyLogo)
    {
        MyLogo->setWindowTitle(QCoreApplication::translate("MyLogo", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyLogo: public Ui_MyLogo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYLOGO_H
