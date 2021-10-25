/********************************************************************************
** Form generated from reading UI file 'editdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITDIALOG_H
#define UI_EDITDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_EditDialog
{
public:
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_Global;
    QLabel *labelOther;
    QLineEdit *lineEdit_Other;
    QLabel *labelNA;
    QLineEdit *lineEdit_Year;
    QLabel *labelGenre;
    QLineEdit *lineEdit_Platform;
    QLineEdit *lineEdit_JP;
    QLineEdit *lineEdit_EU;
    QLineEdit *lineEdit_Publisher;
    QLabel *labelGlobal;
    QLabel *labelPlatform;
    QLineEdit *lineEdit_Genre;
    QLabel *labelJP;
    QLabel *labelPublisher;
    QLineEdit *lineEdit_NA;
    QLabel *labelName;
    QLabel *labelEU;
    QLabel *labelYear;
    QLineEdit *lineEdit_Name;
    QPushButton *pushButton;

    void setupUi(QDialog *EditDialog)
    {
        if (EditDialog->objectName().isEmpty())
            EditDialog->setObjectName(QString::fromUtf8("EditDialog"));
        EditDialog->resize(616, 418);
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri Light"));
        font.setPointSize(10);
        EditDialog->setFont(font);
        gridLayout_2 = new QGridLayout(EditDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEdit_Global = new QLineEdit(EditDialog);
        lineEdit_Global->setObjectName(QString::fromUtf8("lineEdit_Global"));

        gridLayout->addWidget(lineEdit_Global, 15, 1, 1, 1);

        labelOther = new QLabel(EditDialog);
        labelOther->setObjectName(QString::fromUtf8("labelOther"));

        gridLayout->addWidget(labelOther, 13, 0, 1, 1);

        lineEdit_Other = new QLineEdit(EditDialog);
        lineEdit_Other->setObjectName(QString::fromUtf8("lineEdit_Other"));

        gridLayout->addWidget(lineEdit_Other, 13, 1, 1, 1);

        labelNA = new QLabel(EditDialog);
        labelNA->setObjectName(QString::fromUtf8("labelNA"));

        gridLayout->addWidget(labelNA, 7, 0, 1, 1);

        lineEdit_Year = new QLineEdit(EditDialog);
        lineEdit_Year->setObjectName(QString::fromUtf8("lineEdit_Year"));

        gridLayout->addWidget(lineEdit_Year, 2, 1, 1, 1);

        labelGenre = new QLabel(EditDialog);
        labelGenre->setObjectName(QString::fromUtf8("labelGenre"));

        gridLayout->addWidget(labelGenre, 3, 0, 1, 1);

        lineEdit_Platform = new QLineEdit(EditDialog);
        lineEdit_Platform->setObjectName(QString::fromUtf8("lineEdit_Platform"));

        gridLayout->addWidget(lineEdit_Platform, 1, 1, 1, 1);

        lineEdit_JP = new QLineEdit(EditDialog);
        lineEdit_JP->setObjectName(QString::fromUtf8("lineEdit_JP"));

        gridLayout->addWidget(lineEdit_JP, 11, 1, 1, 1);

        lineEdit_EU = new QLineEdit(EditDialog);
        lineEdit_EU->setObjectName(QString::fromUtf8("lineEdit_EU"));

        gridLayout->addWidget(lineEdit_EU, 9, 1, 1, 1);

        lineEdit_Publisher = new QLineEdit(EditDialog);
        lineEdit_Publisher->setObjectName(QString::fromUtf8("lineEdit_Publisher"));

        gridLayout->addWidget(lineEdit_Publisher, 5, 1, 1, 1);

        labelGlobal = new QLabel(EditDialog);
        labelGlobal->setObjectName(QString::fromUtf8("labelGlobal"));

        gridLayout->addWidget(labelGlobal, 15, 0, 1, 1);

        labelPlatform = new QLabel(EditDialog);
        labelPlatform->setObjectName(QString::fromUtf8("labelPlatform"));

        gridLayout->addWidget(labelPlatform, 1, 0, 1, 1);

        lineEdit_Genre = new QLineEdit(EditDialog);
        lineEdit_Genre->setObjectName(QString::fromUtf8("lineEdit_Genre"));

        gridLayout->addWidget(lineEdit_Genre, 3, 1, 1, 1);

        labelJP = new QLabel(EditDialog);
        labelJP->setObjectName(QString::fromUtf8("labelJP"));

        gridLayout->addWidget(labelJP, 11, 0, 1, 1);

        labelPublisher = new QLabel(EditDialog);
        labelPublisher->setObjectName(QString::fromUtf8("labelPublisher"));

        gridLayout->addWidget(labelPublisher, 5, 0, 1, 1);

        lineEdit_NA = new QLineEdit(EditDialog);
        lineEdit_NA->setObjectName(QString::fromUtf8("lineEdit_NA"));

        gridLayout->addWidget(lineEdit_NA, 7, 1, 1, 1);

        labelName = new QLabel(EditDialog);
        labelName->setObjectName(QString::fromUtf8("labelName"));

        gridLayout->addWidget(labelName, 0, 0, 1, 1);

        labelEU = new QLabel(EditDialog);
        labelEU->setObjectName(QString::fromUtf8("labelEU"));

        gridLayout->addWidget(labelEU, 9, 0, 1, 1);

        labelYear = new QLabel(EditDialog);
        labelYear->setObjectName(QString::fromUtf8("labelYear"));

        gridLayout->addWidget(labelYear, 2, 0, 1, 1);

        lineEdit_Name = new QLineEdit(EditDialog);
        lineEdit_Name->setObjectName(QString::fromUtf8("lineEdit_Name"));

        gridLayout->addWidget(lineEdit_Name, 0, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        pushButton = new QPushButton(EditDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_2->addWidget(pushButton, 1, 1, 1, 1);


        retranslateUi(EditDialog);
        QObject::connect(pushButton, SIGNAL(released()), EditDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(EditDialog);
    } // setupUi

    void retranslateUi(QDialog *EditDialog)
    {
        EditDialog->setWindowTitle(QCoreApplication::translate("EditDialog", "Dialog", nullptr));
        labelOther->setText(QCoreApplication::translate("EditDialog", "Other sales", nullptr));
        labelNA->setText(QCoreApplication::translate("EditDialog", "NA sales", nullptr));
        labelGenre->setText(QCoreApplication::translate("EditDialog", "Genre", nullptr));
        labelGlobal->setText(QCoreApplication::translate("EditDialog", "Global sales", nullptr));
        labelPlatform->setText(QCoreApplication::translate("EditDialog", "Platform", nullptr));
        labelJP->setText(QCoreApplication::translate("EditDialog", "JP sales", nullptr));
        labelPublisher->setText(QCoreApplication::translate("EditDialog", "Publisher", nullptr));
        labelName->setText(QCoreApplication::translate("EditDialog", "Name", nullptr));
        labelEU->setText(QCoreApplication::translate("EditDialog", "EU sales", nullptr));
        labelYear->setText(QCoreApplication::translate("EditDialog", "Year", nullptr));
        pushButton->setText(QCoreApplication::translate("EditDialog", "Finish Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditDialog: public Ui_EditDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITDIALOG_H
