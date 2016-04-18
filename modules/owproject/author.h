#ifndef AUTHOR_H
#define AUTHOR_H

#include <QObject>

class Author : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString email READ email WRITE setEmail NOTIFY emailChanged)
    Q_PROPERTY(QString url READ url WRITE setUrl NOTIFY urlChanged)
public:
    explicit Author(QObject *parent = 0);

    QString email() const;
    void setEmail(const QString &email);

    QString url() const;
    void setUrl(const QString &url);

signals:
    void emailChanged(QString);
    void urlChanged(QString);

public slots:

protected:
    QString m_email;
    QString m_url;
};

#endif // AUTHOR_H
