#ifndef OWEVENTHANDLER_H
#define OWEVENTHANDLER_H

#include <QObject>

class OwEventHandler : public QObject
{
    Q_OBJECT
public:
    explicit OwEventHandler(QObject *parent = 0);

signals:

public slots:
};

#endif // OWEVENTHANDLER_H
