#ifndef OWEVENT_H
#define OWEVENT_H

#include <QObject>

class OwEvent : public QObject
{
    Q_OBJECT
public:
    explicit OwEvent(QObject *parent = 0);

signals:

public slots:
};

#endif // OWEVENT_H
