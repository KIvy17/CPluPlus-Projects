/********************************************************************************
** Form generated from reading UI file 'addgamedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDGAMEDIALOG_H
#define UI_ADDGAMEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_AddGameDialog
{
public:
    QFormLayout *formLayout;
    QLabel *label;
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
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AddGameDialog)
    {
        if (AddGameDialog->objectName().isEmpty())
            AddGameDialog->setObjectName(QString::fromUtf8("AddGameDialog"));
        AddGameDialog->resize(546, 464);
        QFont font;
        font.setFamily(QString::fromUtf8("Mongolian Baiti"));
        font.setPointSize(10);
        AddGameDialog->setFont(font);
        formLayout = new QFormLayout(AddGameDialog);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(AddGameDialog);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEdit_Global = new QLineEdit(AddGameDialog);
        lineEdit_Global->setObjectName(QString::fromUtf8("lineEdit_Global"));

        gridLayout->addWidget(lineEdit_Global, 15, 1, 1, 1);

        labelOther = new QLabel(AddGameDialog);
        labelOther->setObjectName(QString::fromUtf8("labelOther"));

        gridLayout->addWidget(labelOther, 13, 0, 1, 1);

        lineEdit_Other = new QLineEdit(AddGameDialog);
        lineEdit_Other->setObjectName(QString::fromUtf8("lineEdit_Other"));

        gridLayout->addWidget(lineEdit_Other, 13, 1, 1, 1);

        labelNA = new QLabel(AddGameDialog);
        labelNA->setObjectName(QString::fromUtf8("labelNA"));

        gridLayout->addWidget(labelNA, 7, 0, 1, 1);

        lineEdit_Year = new QLineEdit(AddGameDialog);
        lineEdit_Year->setObjectName(QString::fromUtf8("lineEdit_Year"));

        gridLayout->addWidget(lineEdit_Year, 2, 1, 1, 1);

        labelGenre = new QLabel(AddGameDialog);
        labelGenre->setObjectName(QString::fromUtf8("labelGenre"));

        gridLayout->addWidget(labelGenre, 3, 0, 1, 1);

        lineEdit_Platform = new QLineEdit(AddGameDialog);
        lineEdit_Platform->setObjectName(QString::fromUtf8("lineEdit_Platform"));

        gridLayout->addWidget(lineEdit_Platform, 1, 1, 1, 1);

        lineEdit_JP = new QLineEdit(AddGameDialog);
        lineEdit_JP->setObjectName(QString::fromUtf8("lineEdit_JP"));

        gridLayout->addWidget(lineEdit_JP, 11, 1, 1, 1);

        lineEdit_EU = new QLineEdit(AddGameDialog);
        lineEdit_EU->setObjectName(QString::fromUtf8("lineEdit_EU"));

        gridLayout->addWidget(lineEdit_EU, 9, 1, 1, 1);

        lineEdit_Publisher = new QLineEdit(AddGameDialog);
        lineEdit_Publisher->setObjectName(QString::fromUtf8("lineEdit_Publisher"));

        gridLayout->addWidget(lineEdit_Publisher, 5, 1, 1, 1);

        labelGlobal = new QLabel(AddGameDialog);
        labelGlobal->setObjectName(QString::fromUtf8("labelGlobal"));

        gridLayout->addWidget(labelGlobal, 15, 0, 1, 1);

        labelPlatform = new QLabel(AddGameDialog);
        labelPlatform->setObjectName(QString::fromUtf8("labelPlatform"));

        gridLayout->addWidget(labelPlatform, 1, 0, 1, 1);

        lineEdit_Genre = new QLineEdit(AddGameDialog);
        lineEdit_Genre->setObjectName(QString::fromUtf8("lineEdit_Genre"));

        gridLayout->addWidget(lineEdit_Genre, 3, 1, 1, 1);

        labelJP = new QLabel(AddGameDialog);
        labelJP->setObjectName(QString::fromUtf8("labelJP"));

        gridLayout->addWidget(labelJP, 11, 0, 1, 1);

        labelPublisher = new QLabel(AddGameDialog);
        labelPublisher->setObjectName(QString::fromUtf8("labelPublisher"));

        gridLayout->addWidget(labelPublisher, 5, 0, 1, 1);

        lineEdit_NA = new QLineEdit(AddGameDialog);
        lineEdit_NA->setObjectName(QString::fromUtf8("lineEdit_NA"));

        gridLayout->addWidget(lineEdit_NA, 7, 1, 1, 1);

        labelName = new QLabel(AddGameDialog);
        labelName->setObjectName(QString::fromUtf8("labelName"));

        gridLayout->addWidget(labelName, 0, 0, 1, 1);

        labelEU = new QLabel(AddGameDialog);
        labelEU->setObjectName(QString::fromUtf8("labelEU"));

        gridLayout->addWidget(labelEU, 9, 0, 1, 1);

        labelYear = new QLabel(AddGameDialog);
        labelYear->setObjectName(QString::fromUtf8("labelYear"));

        gridLayout->addWidget(labelYear, 2, 0, 1, 1);

        lineEdit_Name = new QLineEdit(AddGameDialog);
        lineEdit_Name->setObjectName(QString::fromUtf8("lineEdit_Name"));

        gridLayout->addWidget(lineEdit_Name, 0, 1, 1, 1);


        formLayout->setLayout(1, QFormLayout::LabelRole, gridLayout);

        buttonBox = new QDialogButtonBox(AddGameDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        formLayout->setWidget(2, QFormLayout::FieldRole, buttonBox);


        retranslateUi(AddGameDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddGameDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddGameDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddGameDialog);
    } // setupUi

    void retranslateUi(QDialog *AddGameDialog)
    {
        AddGameDialog->setWindowTitle(QCoreApplication::translate("AddGameDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AddGameDialog", "Adding new game", nullptr));
        labelOther->setText(QCoreApplication::translate("AddGameDialog", "Other sales", nullptr));
        labelNA->setText(QCoreApplication::translate("AddGameDialog", "NA sales", nullptr));
        labelGenre->setText(QCoreApplication::translate("AddGameDialog", "Genre", nullptr));
        labelGlobal->setText(QCoreApplication::translate("AddGameDialog", "Global sales", nullptr));
        labelPlatform->setText(QCoreApplication::translate("AddGameDialog", "Platform", nullptr));
        labelJP->setText(QCoreApplication::translate("AddGameDialog", "JP sales", nullptr));
        labelPublisher->setText(QCoreApplication::translate("AddGameDialog", "Publisher", nullptr));
        labelName->setText(QCoreApplication::translate("AddGameDialog", "Name", nullptr));
        labelEU->setText(QCoreApplication::translate("AddGameDialog", "EU sales", nullptr));
        labelYear->setText(QCoreApplication::translate("AddGameDialog", "Year", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddGameDialog: public Ui_AddGameDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDGAMEDIALOG_H
