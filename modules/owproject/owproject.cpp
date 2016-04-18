#include "owproject.h"


OwProject::OwProject()
{
}
QString OwProject::name() const
{
    return m_name;
}

void OwProject::setName(const QString &name)
{
    m_name = name;
}

