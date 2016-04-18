#ifndef OWROUTE_H
#define OWROUTE_H

#include <QObject>

class OwRoute : public QObject
{
    Q_OBJECT
public:
    explicit OwRoute(QObject *parent = 0);

signals:

public slots:

protected:
    QString m_pattern;
};

#endif // OWROUTE_H
