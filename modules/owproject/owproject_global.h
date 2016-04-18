#ifndef OWPROJECT_GLOBAL_H
#define OWPROJECT_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(OWPROJECT_LIBRARY)
#  define OWPROJECTSHARED_EXPORT Q_DECL_EXPORT
#else
#  define OWPROJECTSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // OWPROJECT_GLOBAL_H
