#ifndef EditDialog_H
#define EditDialog_H

#include <QDialog>

#include <gamessales.h>

namespace Ui {
class EditDialog;
}

class EditDialog : public QDialog
{
    Q_OBJECT

public:
    explicit EditDialog(QWidget *parent = nullptr);
    ~EditDialog();

public:
    int getIndex() const { return _indexOfListItem; }
    void setIndex(int index) { _indexOfListItem = index; }
    void setGameAttributes(const AnotherGame& gameToEdit) const;
    void editGameAttributes() ;

    bool getOkButton() const { return _okIsAccepted; }
    bool getFinishEditButton() const { return _finishEdit; }
    QPair<QString, AnotherGame> getEditedGame() const ;
protected:
    int _indexOfListItem;
    bool _okIsAccepted;
    bool _deleteIsTriggered;
    bool _finishEdit;
    QPair<QString, AnotherGame> _gamePairToEdit ;

private slots:

    void on_pushButton_released();

private:
    Ui::EditDialog *ui;
};

#endif // EditDialog_H
