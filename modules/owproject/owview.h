#ifndef OWVIEW_H
#define OWVIEW_H

#include <QObject>

class OwView : public QObject
{
    Q_OBJECT
public:
    explicit OwView(QObject *parent = 0);

    QString source() const;
    void setSource(const QString &source);

signals:

public slots:

protected:

    QString m_source;
};

#endif // OWVIEW_H
