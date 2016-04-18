#include "author.h"

Author::Author(QObject *parent) : QObject(parent)
{

}

QString Author::email() const
{
    return m_email;
}

void Author::setEmail(const QString &email)
{
    m_email = email;
}
QString Author::url() const
{
    return m_url;
}

void Author::setUrl(const QString &url)
{
    m_url = url;
}




