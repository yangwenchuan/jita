/****************************************************************************
** Meta object code from reading C++ file 'gitarshow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../gitarshow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gitarshow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_gitarshow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   11,   10,   10, 0x0a,
      64,   58,   10,   10, 0x0a,
      91,   10,   10,   10, 0x0a,
     111,   10,   10,   10, 0x0a,
     137,  132,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_gitarshow[] = {
    "gitarshow\0\0songname\0"
    "onNameListCurrentTextChanged(QString)\0"
    "event\0resizeEvent(QResizeEvent*)\0"
    "onSearchClick(bool)\0onRefreshClick(bool)\0"
    "name\0onSearchNameChanged(QString)\0"
};

void gitarshow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        gitarshow *_t = static_cast<gitarshow *>(_o);
        switch (_id) {
        case 0: _t->onNameListCurrentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->resizeEvent((*reinterpret_cast< QResizeEvent*(*)>(_a[1]))); break;
        case 2: _t->onSearchClick((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->onRefreshClick((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->onSearchNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData gitarshow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject gitarshow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_gitarshow,
      qt_meta_data_gitarshow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &gitarshow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *gitarshow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *gitarshow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_gitarshow))
        return static_cast<void*>(const_cast< gitarshow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int gitarshow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
