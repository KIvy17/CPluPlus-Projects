/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen_File;
    QAction *actionSave_File;
    QAction *actionAbout;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QListView *listGames;
    QVBoxLayout *verticalLayout;
    QPushButton *btnAddNewGame;
    QSpacerItem *verticalSpacer;
    QPushButton *btnDelete;
    QSpacerItem *horizontalSpacer;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QLabel *numberOfGames;
    QMenuBar *menubar;
    QMenu *menuMain_menu;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(974, 549);
        QFont font;
        font.setFamily(QString::fromUtf8("Century Gothic"));
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        MainWindow->setFont(font);
        actionOpen_File = new QAction(MainWindow);
        actionOpen_File->setObjectName(QString::fromUtf8("actionOpen_File"));
        actionSave_File = new QAction(MainWindow);
        actionSave_File->setObjectName(QString::fromUtf8("actionSave_File"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        listGames = new QListView(centralwidget);
        listGames->setObjectName(QString::fromUtf8("listGames"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listGames->sizePolicy().hasHeightForWidth());
        listGames->setSizePolicy(sizePolicy);

        gridLayout->addWidget(listGames, 1, 0, 4, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        btnAddNewGame = new QPushButton(centralwidget);
        btnAddNewGame->setObjectName(QString::fromUtf8("btnAddNewGame"));
        btnAddNewGame->setEnabled(true);
        sizePolicy.setHeightForWidth(btnAddNewGame->sizePolicy().hasHeightForWidth());
        btnAddNewGame->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(btnAddNewGame);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        btnDelete = new QPushButton(centralwidget);
        btnDelete->setObjectName(QString::fromUtf8("btnDelete"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnDelete->sizePolicy().hasHeightForWidth());
        btnDelete->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(btnDelete);


        gridLayout->addLayout(verticalLayout, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 1, 1, 1);

        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));

        gridLayout->addWidget(frame, 1, 1, 2, 1);

        numberOfGames = new QLabel(centralwidget);
        numberOfGames->setObjectName(QString::fromUtf8("numberOfGames"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(numberOfGames->sizePolicy().hasHeightForWidth());
        numberOfGames->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Century Gothic"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        numberOfGames->setFont(font1);
        numberOfGames->setLayoutDirection(Qt::LeftToRight);
        numberOfGames->setAutoFillBackground(false);
        numberOfGames->setStyleSheet(QString::fromUtf8(""));
        numberOfGames->setTextFormat(Qt::AutoText);
        numberOfGames->setWordWrap(true);
        numberOfGames->setOpenExternalLinks(false);

        gridLayout->addWidget(numberOfGames, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 974, 24));
        menuMain_menu = new QMenu(menubar);
        menuMain_menu->setObjectName(QString::fromUtf8("menuMain_menu"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuMain_menu->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuMain_menu->addAction(actionOpen_File);
        menuMain_menu->addAction(actionSave_File);
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionOpen_File->setText(QCoreApplication::translate("MainWindow", "Open File", nullptr));
#if QT_CONFIG(tooltip)
        actionOpen_File->setToolTip(QCoreApplication::translate("MainWindow", "Open File", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionOpen_File->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        actionOpen_File->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        actionSave_File->setText(QCoreApplication::translate("MainWindow", "Save File", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
#if QT_CONFIG(tooltip)
        listGames->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>List of game's names</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        btnAddNewGame->setText(QCoreApplication::translate("MainWindow", "Add new game", nullptr));
        btnDelete->setText(QCoreApplication::translate("MainWindow", "Delete Game", nullptr));
        numberOfGames->setText(QCoreApplication::translate("MainWindow", "Total Number of games is :", nullptr));
        menuMain_menu->setTitle(QCoreApplication::translate("MainWindow", "Main menu", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
