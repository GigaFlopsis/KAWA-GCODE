#ifndef PROGRAMRUN_H
#define PROGRAMRUN_H

#include <QObject>

class ProgramRun : public QObject
{
    Q_OBJECT
public:
    explicit ProgramRun(QObject *parent = 0);

signals:

public slots:
};

#endif // PROGRAMRUN_H