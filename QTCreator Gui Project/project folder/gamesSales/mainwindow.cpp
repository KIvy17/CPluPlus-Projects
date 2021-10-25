#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QFileDialog>
#include <QMessageBox>
#include <QPainter>
#include <QWindow>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    _logoWidget = new MyLogo(ui->frame);

    _model = new QStringListModel(this);

    _gamezStorage = new GamesSales(this);

    ui->listGames->setModel(_model);

    QObject::connect(_gamezStorage, SIGNAL(fileOpen()),
                    this, SLOT(onDataStorageOpen()));

    QObject::connect(_gamezStorage, SIGNAL(gameIsAdded()),
                     this, SLOT(onDataStorageOpen()));

    QObject::connect(_gamezStorage, SIGNAL(gameIsChanged()),
                     this, SLOT(onDataStorageOpen()));


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionOpen_File_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this,
        tr("Open Data Storage"), "", tr("CSV Files (*.csv)"));

    if (fileName.isNull())
        return;

    // otherwise, let's activate a model
    _gamezStorage->openFile(fileName);

}

void MainWindow::onDataStorageOpen()
{
    // QStringList → QList<QString>
    _model->setStringList( _gamezStorage->getKeys() );

    QString textForLabel = "Total number of games: " + QString::number(_gamezStorage->getKeys().size());
    ui->numberOfGames->setText(textForLabel);

}

void MainWindow::on_listGames_doubleClicked(const QModelIndex &index)
{
    _editWindow = new EditDialog(this);
    _editWindow->setWindowTitle("Edit Game");
    QString gameByIndex = _model->data(index).toString();
    AnotherGame gameChoosed = _gamezStorage->getGameDetails(gameByIndex);
    _editWindow->setGameAttributes(gameChoosed);                                ///setting attributes of the game(index) by lindEdits
    _editWindow->exec();
    ////////////////////////////WORKING WITH EDIT, CHANGE FLAG(FINISH_EDIT) STATUS TO TRUE////////////////////////////////////////

    if(_editWindow->getFinishEditButton())
    {
        //_editWindow->editGameAttributes();
        //_gamezStorage->deleteGame(gameChoosed.name);
        QPair<QString, AnotherGame> editedGame = _editWindow->getEditedGame();
        _gamezStorage->editGame(gameByIndex,editedGame);
        //_gamezStorage->addGame(editedGame);

        _editWindow->close();
    }

}

void MainWindow::on_btnAddNewGame_released()
{
    _addWindow = new AddGameDialog(this);
    _addWindow->setWindowTitle("Add new game");
    _addWindow->exec();


    if(_addWindow->getBoolOfDialog())
    {
        //_addWindow->creatingNewGame();
        QString gameName = _addWindow->getGameName();
        AnotherGame gameValue = _addWindow->getValueOfGame();
        QPair<QString, AnotherGame> pairToAdd = {gameName, gameValue};
        _gamezStorage->addGame(pairToAdd);
    }

}


void MainWindow::on_actionAbout_triggered()
{
    QMessageBox box;
    box.setText("My id is 147");
    box.setWindowTitle("About...");
    box.exec();

}

void MainWindow::on_actionSave_File_triggered()
{
    QString fileName = QFileDialog::getSaveFileName(this,
        tr("Choose file to save"), "", tr("Txt Files (*.txt)"));

    if (fileName.isNull())
        return;
    _gamezStorage->writeToFile(fileName);

}

void MainWindow::on_listGames_clicked(const QModelIndex &index)
{
    _nameToDel = _model->data(index).toString();
}

void MainWindow::on_btnDelete_released()
{
    _gamezStorage->deleteGame(_nameToDel);
}
