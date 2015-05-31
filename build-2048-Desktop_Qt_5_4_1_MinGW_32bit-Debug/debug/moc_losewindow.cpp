/****************************************************************************
** Meta object code from reading C++ file 'losewindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../2048/losewindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'losewindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_losewindow_t {
    QByteArrayData data[6];
    char stringdata[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_losewindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_losewindow_t qt_meta_stringdata_losewindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "losewindow"
QT_MOC_LITERAL(1, 11, 10), // "keep_going"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 8), // "new_game"
QT_MOC_LITERAL(4, 32, 26), // "on_keepgoingButton_clicked"
QT_MOC_LITERAL(5, 59, 24) // "on_newgameButton_clicked"

    },
    "losewindow\0keep_going\0\0new_game\0"
    "on_keepgoingButton_clicked\0"
    "on_newgameButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_losewindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void losewindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        losewindow *_t = static_cast<losewindow *>(_o);
        switch (_id) {
        case 0: _t->keep_going(); break;
        case 1: _t->new_game(); break;
        case 2: _t->on_keepgoingButton_clicked(); break;
        case 3: _t->on_newgameButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (losewindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&losewindow::keep_going)) {
                *result = 0;
            }
        }
        {
            typedef void (losewindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&losewindow::new_game)) {
                *result = 1;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject losewindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_losewindow.data,
      qt_meta_data_losewindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *losewindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *losewindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_losewindow.stringdata))
        return static_cast<void*>(const_cast< losewindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int losewindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void losewindow::keep_going()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void losewindow::new_game()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
