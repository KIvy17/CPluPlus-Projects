#include "gamessales.h"

#include <QFile>
#include <QTextStream>
#include <QStringList>


GamesSales::GamesSales(QObject *parent)
    : QObject(parent)

{

}

//bool operator<(const QPair<QString, AnotherGame>& lhs, const QPair<QString, AnotherGame>& rhs)
//{
//    if (lhs.second.global_sales < rhs.second.global_sales)
//        return true;
//    return false;
//}

void GamesSales::openFile(const QString& fileName)
{
    _fileName = fileName;
    readFile();

    emit fileOpen();
}

void GamesSales::readFile()
{
    if (_fileName.isEmpty())
        throw std::invalid_argument("File name is not set");

    QFile file(_fileName);
    if (!file.open(QIODevice::ReadOnly))
        throw std::runtime_error("Could not open file");

    bool firstLine = true;

    // otherwise the file is open and we deal with it throug a stream object
    QTextStream fStream(&file);
    while (!fStream.atEnd())
    {
       QString line = fStream.readLine();
       if (line.isNull())
           continue;

       //--------- parsing

       if (firstLine)                   // skipping first line
       {
           firstLine = false;
           continue;
       }

       // parsing real records
       QStringList recAttrbs = line.split(QLatin1Char(';'));
       if (recAttrbs.size() < 10)        // skip an incomplete record with
           continue;

       AnotherGame newGame = {recAttrbs[0], recAttrbs[1], recAttrbs[2], recAttrbs[3],
                    recAttrbs[4], recAttrbs[5],recAttrbs[6],recAttrbs[7],
                    recAttrbs[8],recAttrbs[9]};
       _games.insert(recAttrbs[0], newGame);
    }


    file.close();

}

QString GamesSales::getPopPlatf() const               //not finished, needed for Most Frequent platform
{
    QList<QString> tmp;
    QMap<QString, int> tmpMap;
    for(const AnotherGame& el : _games)               //range runs on values
    {
        tmp.append(el.platform);
    }
    for(QString platform : tmp)
    {
        if(!tmpMap.contains(platform))
        {
            tmpMap.insert(platform, tmp.count(platform));
        }
    }
    QMap<int, QString> countMap;
}

AnotherGame GamesSales::getGameDetails(const QString& gameName) const
{
    return _games[gameName];
}

void GamesSales::addGame(const QPair<QString, AnotherGame>& pairToAdd)
{
    _games.insert(pairToAdd.first,pairToAdd.second);
    emit gameIsAdded();
}

void GamesSales::deleteGame(const QString& name)
{
    QMap<QString, AnotherGame>::Iterator it = _games.find(name);
    _games.erase(it);
    emit gameIsChanged();
}


void GamesSales::editGame(const QString& oldGameName, const QPair<QString, AnotherGame>& pairToEdit)
{
    if(oldGameName == pairToEdit.first)
        return;



    QMap<QString, AnotherGame>::Iterator it = _games.find(oldGameName);
    _games.erase(it);

    _games.insert(pairToEdit.first,pairToEdit.second);


    emit gameIsChanged();
}

void GamesSales::writeToFile(const QString& fileName)
{
    QFile file(fileName);
    if(file.open(QIODevice::WriteOnly))
    {
        QTextStream fstream(&file);
        fstream << "Name;Platform;Year;Genre;Publisher;NA_Sales;EU_Sales;JP_Sales;Other_Sales;Global_Sales;" << endl;
        for(const AnotherGame& mapGame : _games)
        {
            fstream << mapGame.name << ";" << mapGame.platform << ";" << mapGame.year << ";" <<
                       mapGame.genre << ";" << mapGame.publisher << ";" << mapGame.na_sales << ";" <<
                       mapGame.eu_sales << ";" << mapGame.jp_sales << ";" << mapGame.other_sales << ";" <<
                       mapGame.global_sales << ";" << endl;
        }
    }
    file.close();
    emit fileOpen();
}






//int GamesSales::rowCount(const QModelIndex & /*parent*/) const
//{
//    return _games.count();                                        ///use for most favourite platform
//}

//int GamesSales::columnCount(const QModelIndex & /*parent*/) const
//{
//    return 10;
//}

//QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const
//{

//}
