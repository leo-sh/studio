#ifndef OWCLASS_H
#define OWCLASS_H

#include <QObject>

class OwClass : public QObject
{
    Q_OBJECT
public:
    explicit OwClass(QObject *parent = 0);

signals:

public slots:
};

#endif // OWCLASS_H
