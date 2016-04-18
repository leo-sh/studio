#include "owproject.h"


OwProject::OwProject()
{
}
QHash<QString, OwRoute *> OwProject::routes() const
{
    return m_routes;
}

void OwProject::setRoutes(const QHash<QString, OwRoute *> &routes)
{
    m_routes = routes;
}
QHash<QString, OwLayout *> OwProject::layouts() const
{
    return m_layouts;
}

void OwProject::setLayouts(const QHash<QString, OwLayout *> &layouts)
{
    m_layouts = layouts;
}
QHash<QString, OwController *> OwProject::controllers() const
{
    return m_controllers;
}

void OwProject::setControllers(const QHash<QString, OwController *> &controllers)
{
    m_controllers = controllers;
}
QHash<QString, OwView *> OwProject::views() const
{
    return m_views;
}

void OwProject::setViews(const QHash<QString, OwView *> &views)
{
    m_views = views;
}
QHash<QString, OwForm *> OwProject::forms() const
{
    return m_forms;
}

void OwProject::setForms(const QHash<QString, OwForm *> &forms)
{
    m_forms = forms;
}
int OwProject::buildNumber() const
{
    return m_buildNumber;
}

void OwProject::setBuildNumber(int buildNumber)
{
    m_buildNumber = buildNumber;
}
QString OwProject::pluginkey() const
{
    return m_pluginkey;
}

void OwProject::setPluginkey(const QString &pluginkey)
{
    m_pluginkey = pluginkey;
}
QString OwProject::description() const
{
    return m_description;
}

void OwProject::setDescription(const QString &description)
{
    m_description = description;
}
QString OwProject::developerkey() const
{
    return m_developerkey;
}

void OwProject::setDeveloperkey(const QString &developerkey)
{
    m_developerkey = developerkey;
}
License *OwProject::license() const
{
    return m_license;
}

void OwProject::setLicense(License *license)
{
    m_license = license;
}
Author *OwProject::author() const
{
    return m_author;
}

void OwProject::setAuthor(Author *author)
{
    m_author = author;
}





