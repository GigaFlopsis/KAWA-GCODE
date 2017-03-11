#ifndef GPARSER_H
#define GPARSER_H


#include "QString"
#include <QObject>
#include "port.h"
#include "QList"


struct paramPoint{
    paramPoint():
    x(99999), y(99999), z(99999),speed(99999), g(99999), i(99999), j(99999)
    {}
    double x;
    double y;
    double z;
    int speed;
    int g;
    double i;
    double j;
};

class GParser : public QObject
{
    Q_OBJECT
public:
    int k = 0;

    QList<paramPoint> posList;
    explicit GParser(QObject *parent = 0);
    enum cmd { complite, error, maxRange, finish, comment};
    void Debug(QString &arg1); //for test

signals:
    cmdComplite();
    cmdError();
    cmdFinish();
    cmdResponse();
    cmdComment();
    filePos(QList<paramPoint> posList);

public slots:
    void ParseCmd(const QString &arg1);
    void ParsingFile(QStringList data);
    void ClearList();
private:
    paramPoint ParseParam(QStringList list); //set parsing line file
    void ChangeEmpyParam(paramPoint &targetPos, paramPoint currentPos);
};

#endif // GPARSER_H
