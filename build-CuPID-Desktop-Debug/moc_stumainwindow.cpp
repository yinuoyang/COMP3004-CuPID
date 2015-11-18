/****************************************************************************
** Meta object code from reading C++ file 'stumainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../CuPID/stumainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stumainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_StuMainWindow_t {
    QByteArrayData data[6];
    char stringdata[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_StuMainWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_StuMainWindow_t qt_meta_stringdata_StuMainWindow = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 21),
QT_MOC_LITERAL(2, 36, 0),
QT_MOC_LITERAL(3, 37, 24),
QT_MOC_LITERAL(4, 62, 4),
QT_MOC_LITERAL(5, 67, 23)
    },
    "StuMainWindow\0on_pushButton_clicked\0"
    "\0on_lineEdit_3_textEdited\0arg1\0"
    "on_pushButton_3_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StuMainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08,
       3,    1,   30,    2, 0x08,
       5,    0,   33,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,

       0        // eod
};

void StuMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StuMainWindow *_t = static_cast<StuMainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_lineEdit_3_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_pushButton_3_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject StuMainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_StuMainWindow.data,
      qt_meta_data_StuMainWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *StuMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StuMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StuMainWindow.stringdata))
        return static_cast<void*>(const_cast< StuMainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int StuMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
