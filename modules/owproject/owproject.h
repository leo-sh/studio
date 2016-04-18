#ifndef OWPROJECT_H
#define OWPROJECT_H

#include "owproject_global.h"

#include <QObject>
#include <QString>
#include <QHash>

#include "owroute.h"
#include "owlayout.h"
#include "owcontroller.h"
#include "owform.h"
#include "owview.h"

#include "author.h"
#include "license.h"

class OWPROJECTSHARED_EXPORT OwProject : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString pluginkey READ pluginkey WRITE setPluginkey NOTIFY pluginkeyChanged)
    Q_PROPERTY(QString description READ description WRITE setDescription NOTIFY descriptionChanged)
    Q_PROPERTY(QString developerkey READ developerkey WRITE setDeveloperkey NOTIFY developerkeyChanged)
    Q_PROPERTY(int buildNumber READ buildNumber WRITE setBuildNumber NOTIFY buildNumberChanged)

public:
    OwProject();

    QHash<QString, OwRoute *> routes() const;
    void setRoutes(const QHash<QString, OwRoute *> &routes);

    QHash<QString, OwLayout *> layouts() const;
    void setLayouts(const QHash<QString, OwLayout *> &layouts);

    QHash<QString, OwController *> controllers() const;
    void setControllers(const QHash<QString, OwController *> &controllers);

    QHash<QString, OwView *> views() const;
    void setViews(const QHash<QString, OwView *> &views);

    QHash<QString, OwForm *> forms() const;
    void setForms(const QHash<QString, OwForm *> &forms);

    int buildNumber() const;
    void setBuildNumber(int buildNumber);

    QString pluginkey() const;
    void setPluginkey(const QString &pluginkey);

    QString description() const;
    void setDescription(const QString &description);

    QString developerkey() const;
    void setDeveloperkey(const QString &developerkey);

    License *license() const;
    void setLicense(License *license);

    Author *author() const;
    void setAuthor(Author *author);

signals:
    void pluginkeyChanged(QString);
    void developerkeyChanged(QString);
    void descriptionChanged(QString);
    void buildNumberChanged(int);

protected:
    QString m_pluginkey;
    QString m_description;
    QString m_developerkey;
    int m_buildNumber;

    Author * m_author;
    License * m_license;

    QHash<QString, OwRoute*> m_routes;
    QHash<QString, OwLayout*> m_layouts;
    QHash<QString, OwController*> m_controllers;
    QHash<QString, OwView*> m_views;
    QHash<QString, OwForm*> m_forms;
};

#endif // OWPROJECT_H
