#include "editdialog.h"
#include "ui_editdialog.h"

#include "gamessales.h"
#include "addgamedialog.h"

#include <QMessageBox>


EditDialog::EditDialog(QWidget *parent) :
    QDialog(parent),
    _indexOfListItem(-1),
    _okIsAccepted(false),
    _finishEdit(false),
    ui(new Ui::EditDialog)

{
    ui->setupUi(this);
}

EditDialog::~EditDialog()
{
    delete ui;
}

void EditDialog::setGameAttributes(const AnotherGame& gameToEdit) const
{
    ui->lineEdit_Name->setText(gameToEdit.name);
    ui->lineEdit_Platform->setText(gameToEdit.platform);
    ui->lineEdit_Year->setText(gameToEdit.year);
    ui->lineEdit_Genre->setText(gameToEdit.genre);
    ui->lineEdit_Publisher->setText(gameToEdit.publisher);
    ui->lineEdit_NA->setText(gameToEdit.na_sales);
    ui->lineEdit_EU->setText(gameToEdit.eu_sales);
    ui->lineEdit_JP->setText(gameToEdit.jp_sales);
    ui->lineEdit_Other->setText(gameToEdit.other_sales);
    ui->lineEdit_Global->setText(gameToEdit.global_sales);

}

void EditDialog::editGameAttributes()
{
    AnotherGame gameToEdit;
    QString nameStr = ui->lineEdit_Name->text();
    gameToEdit.name = nameStr;

    QString platformStr = ui->lineEdit_Platform->text();
    gameToEdit.platform = platformStr;

    QString yearStr = ui->lineEdit_Year->text();

    bool convertOk;
    int yearCheck = yearStr.toInt(&convertOk);
    if ( yearCheck < 1880 or yearCheck > 2100 or !convertOk )
    {
        QMessageBox box;
        box.setText("Wrong value for year field, please add the game again");
        box.show();


    }
    gameToEdit.year = yearStr;

    QString genreStr = ui->lineEdit_Genre->text();
    gameToEdit.genre = genreStr;

    QString publisherStr = ui->lineEdit_Publisher->text();
    gameToEdit.publisher = publisherStr;

    QString naSalesStr = ui->lineEdit_NA->text();
    gameToEdit.na_sales = naSalesStr;

    double naSalesCheck = naSalesStr.toDouble(&convertOk);
    if ( naSalesCheck < 0 or !convertOk )
    {
        QMessageBox::warning(this, "Enter the game again", "Wrong value for na_sales field");
        return ;
    }

    QString euSalesStr = ui->lineEdit_EU->text();
    gameToEdit.eu_sales = euSalesStr;

    double euSalesCheck = euSalesStr.toDouble(&convertOk);
    if ( euSalesCheck < 0 or !convertOk )
    {
        QMessageBox::warning(this, "Enter the game again", "Wrong value for eu_sales field");

        return ;
    }

    QString jpSalesStr = ui->lineEdit_JP->text();
    gameToEdit.jp_sales = jpSalesStr;

    double jpSalesCheck = jpSalesStr.toDouble(&convertOk);
    if ( jpSalesCheck < 0 or !convertOk )
    {
        QMessageBox::warning(this, "Enter the game again", "Wrong value for jp_sales field");

        return ;
    }

    QString otherSalesStr = ui->lineEdit_Other->text();
    gameToEdit.other_sales = otherSalesStr;

    double otherSalesCheck = otherSalesStr.toDouble(&convertOk);
    if ( otherSalesCheck < 0 or !convertOk )
    {
        QMessageBox::warning(this, "Enter the game again", "Wrong value for other_sales field");

        return ;
    }

    QString globalSalesStr = ui->lineEdit_Global->text();
    gameToEdit.global_sales = globalSalesStr;

    double globalSalesCheck = globalSalesStr.toDouble(&convertOk);
    if ( globalSalesCheck < 0 or !convertOk)
    {
        QMessageBox::warning(this, "Enter the game again", "Wrong value for global_sales field");

        return ;
    }
    _gamePairToEdit.first = gameToEdit.name;
    _gamePairToEdit.second = gameToEdit;
    _finishEdit = true;

}

QPair<QString, AnotherGame> EditDialog::getEditedGame() const
{
    return {_gamePairToEdit.first, _gamePairToEdit.second};
}


////BUTTONS NOT WORKING



//void EditDialog::on_buttonBox_accepted()
//{
//    _okIsAccepted = true;
//}

//void EditDialog::on_pushButton_released()
//{
//    _finishEdit = true;
//}

void EditDialog::on_pushButton_released()
{
    editGameAttributes();  
}
