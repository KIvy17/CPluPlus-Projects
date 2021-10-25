#ifndef ADDGAMEDIALOG_H
#define ADDGAMEDIALOG_H

#include <QDialog>
#include <QLineEdit>
#include <QString>

#include "gamessales.h"

namespace Ui {
class AddGameDialog;
}

class AddGameDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddGameDialog(QWidget *parent = nullptr);
    ~AddGameDialog();

public:
     void creatingNewGame();
     QString getGameName() const { return _gamePairToAdd->first; }
     AnotherGame getValueOfGame() const { return _gamePairToAdd->second; }
     bool getBoolOfDialog() const  { return _checkGameAdded; }

protected:
     QPair<QString, AnotherGame>* _gamePairToAdd ;
     bool _checkGameAdded ;

private slots:
     void on_buttonBox_accepted();


private:
    Ui::AddGameDialog *ui;
};

#endif // ADDGAMEDIALOG_H
