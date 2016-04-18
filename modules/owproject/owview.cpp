#include "owview.h"

OwView::OwView(QObject *parent) : QObject(parent)
{

}
QString OwView::source() const
{
    return m_source;
}

void OwView::setSource(const QString &source)
{
    m_source = source;
}


