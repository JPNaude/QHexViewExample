#ifndef QHEXVIEW_GLOBAL_H
#define QHEXVIEW_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(QHEXVIEW_LIBRARY)
#  define QHEXVIEW_EXPORT Q_DECL_EXPORT
#else
#  define QHEXVIEW_EXPORT Q_DECL_IMPORT
#endif

#endif // QHEXVIEW_GLOBAL_H
