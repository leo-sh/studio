#ifndef OWCONTROLLER_H
#define OWCONTROLLER_H

#include <QObject>

class OwController : public QObject
{
    Q_OBJECT
public:
    explicit OwController(QObject *parent = 0);

signals:

public slots:

protected:
    QString m_name;
};

#endif // OWCONTROLLER_H
