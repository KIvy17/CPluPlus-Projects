#include "addgamedialog.h"
#include "ui_addgamedialog.h"

#include <QMessageBox>

#include "mainwindow.h"
#include "gamessales.h"

AddGameDialog::AddGameDialog(QWidget *parent) :
    QDialog(parent),
    _checkGameAdded(false),
    ui(new Ui::AddGameDialog)
{
    _gamePairToAdd = new QPair<QString, AnotherGame>;
    ui->setupUi(this);




}

AddGameDialog::~AddGameDialog()
{
    delete ui;
}


void AddGameDialog::creatingNewGame()         // считывает текст из диалога addgame и создает
                                                        // пару std::pair<QString, AnotherGame> в protected
{
    AnotherGame newGame;
    bool convertOk;


    QString nameStr = ui->lineEdit_Name->text();
    newGame.name = nameStr;

    QString platformStr = ui->lineEdit_Platform->text();
    newGame.platform = platformStr;


    QString yearStr = ui->lineEdit_Year->text();

    int yearCheck = yearStr.toInt(&convertOk);
    if ( yearCheck < 1880 or yearCheck > 2100 or !convertOk )
    {
        QMessageBox::warning(this, "Enter the game again", "Wrong value for year field");

        return ;
    }
    newGame.year = yearStr;


    QString genreStr = ui->lineEdit_Genre->text();
    newGame.genre = genreStr;

    QString publisherStr = ui->lineEdit_Publisher->text();
    newGame.publisher = publisherStr;

    QString naSalesStr = ui->lineEdit_NA->text();
    newGame.na_sales = naSalesStr;

    double naSalesCheck = naSalesStr.toDouble(&convertOk);
    if ( naSalesCheck < 0 or !convertOk )
    {
        QMessageBox::warning(this, "Enter the game again", "Wrong value for na_sales field");
        return ;
    }

    QString euSalesStr = ui->lineEdit_EU->text();
    newGame.eu_sales = euSalesStr;

    double euSalesCheck = euSalesStr.toDouble(&convertOk);
    if ( euSalesCheck < 0 or !convertOk )
    {
        QMessageBox::warning(this, "Enter the game again", "Wrong value for eu_sales field");

        return ;
    }

    QString jpSalesStr = ui->lineEdit_JP->text();
    newGame.jp_sales = jpSalesStr;

    double jpSalesCheck = jpSalesStr.toDouble(&convertOk);
    if ( jpSalesCheck < 0 or !convertOk )
    {
        QMessageBox::warning(this, "Enter the game again", "Wrong value for jp_sales field");

        return ;
    }

    QString otherSalesStr = ui->lineEdit_Other->text();
    newGame.other_sales = otherSalesStr;

    double otherSalesCheck = otherSalesStr.toDouble(&convertOk);
    if ( otherSalesCheck < 0 or !convertOk )
    {
        QMessageBox::warning(this, "Enter the game again", "Wrong value for other_sales field");

        return ;
    }

    QString globalSalesStr = ui->lineEdit_Global->text();
    newGame.global_sales = globalSalesStr;

    double globalSalesCheck = globalSalesStr.toDouble(&convertOk);
    if ( globalSalesCheck < 0 or !convertOk)
    {
        QMessageBox::warning(this, "Enter the game again", "Wrong value for global_sales field");

        return ;
    }

    _gamePairToAdd->first = nameStr;
    _gamePairToAdd->second = newGame;
    _checkGameAdded = true;
}



void AddGameDialog::on_buttonBox_accepted()
{
    creatingNewGame();

}
