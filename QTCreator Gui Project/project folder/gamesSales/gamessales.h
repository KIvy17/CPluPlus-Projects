#ifndef GAMESSALES_H
#define GAMESSALES_H

#include <QObject>
#include <QString>
#include <QMap>
#include <QList>
#include <QAbstractListModel>


struct AnotherGame {
    QString name;
    QString platform;
    QString year;
    QString genre;
    QString publisher;
    QString na_sales;
    QString eu_sales;
    QString jp_sales;
    QString other_sales;
    QString global_sales;
};


class GamesSales : public QObject
{
public:
    GamesSales();
    Q_OBJECT
public:
    explicit GamesSales(QObject* parent = nullptr);

public:
    void writeToFile(const QString& fileName) ;
    void openFile(const QString& fileName); 

    QString getPopPlatf() const;                        //not finished
    QList<QString> getKeys() const { return _games.keys(); }
    AnotherGame getGameDetails(const QString& gameName) const;

    void addGame(const QPair<QString, AnotherGame>& pairToAdd);
    void deleteGame(const QString& name);
    void editGame(const QString& oldGameName, const QPair<QString, AnotherGame>& pairToEdit);


protected:
    void readFile();                        /// Reads the set file internally.

protected:
    QString _fileName;                      /// Stores a name for a file with data.
    QMap<QString, AnotherGame> _games;      /// Stores games


signals:
    void fileOpen();                        /// signal is emitted, when a file is attached
    void gameIsAdded();                     /// signal is emitted, when a new game is added
    void gameIsChanged();                   /// signal is emitted, when the game is edited or deleted
};

#endif // GAMESSALES_H
