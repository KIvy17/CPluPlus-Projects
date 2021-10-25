#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStringListModel>
#include <QWindow>

#include "gamessales.h"
#include "editdialog.h"
#include "addgamedialog.h"
#include "mylogo.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    GamesSales* _gamezStorage;
    QStringListModel* _model;

private slots:
    void on_actionOpen_File_triggered();

    void onDataStorageOpen();

    void on_listGames_doubleClicked(const QModelIndex &index);

    void on_btnAddNewGame_released();

    void on_actionAbout_triggered();

    void on_actionSave_File_triggered();

    void on_listGames_clicked(const QModelIndex &index);

    void on_btnDelete_released();

private:
    Ui::MainWindow* ui;
    EditDialog* _editWindow;
    AddGameDialog* _addWindow;
    MyLogo* _logoWidget;
    QDialog* _aboutWindow;

    QString _nameToDel;
};
#endif // MAINWINDOW_H
