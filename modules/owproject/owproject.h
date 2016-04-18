#ifndef OWPROJECT_H
#define OWPROJECT_H

#include "owproject_global.h"

#include <QObject>
#include <QString>

class OWPROJECTSHARED_EXPORT OwProject : public QObject
{
    Q_OBJECT
public:
    OwProject();

    QString name() const;
    void setName(const QString &name);

protected:
    QString m_name;
};

#endif // OWPROJECT_H
