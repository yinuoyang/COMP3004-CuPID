/****************************************************************************
** Meta object code from reading C++ file 'stuprofile.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../CuPID/stuprofile.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stuprofile.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_StuProfile_t {
    QByteArrayData data[8];
    char stringdata[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_StuProfile_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_StuProfile_t qt_meta_stringdata_StuProfile = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 23),
QT_MOC_LITERAL(2, 35, 0),
QT_MOC_LITERAL(3, 36, 15),
QT_MOC_LITERAL(4, 52, 22),
QT_MOC_LITERAL(5, 75, 5),
QT_MOC_LITERAL(6, 81, 15),
QT_MOC_LITERAL(7, 97, 15)
    },
    "StuProfile\0on_pushButton_3_clicked\0\0"
    "on_quit_clicked\0on_projectList_clicked\0"
    "index\0on_join_clicked\0on_Back_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StuProfile[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08,
       3,    0,   40,    2, 0x08,
       4,    1,   41,    2, 0x08,
       6,    0,   44,    2, 0x08,
       7,    0,   45,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    5,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void StuProfile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StuProfile *_t = static_cast<StuProfile *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_3_clicked(); break;
        case 1: _t->on_quit_clicked(); break;
        case 2: _t->on_projectList_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->on_join_clicked(); break;
        case 4: _t->on_Back_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject StuProfile::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_StuProfile.data,
      qt_meta_data_StuProfile,  qt_static_metacall, 0, 0}
};


const QMetaObject *StuProfile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StuProfile::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StuProfile.stringdata))
        return static_cast<void*>(const_cast< StuProfile*>(this));
    return QDialog::qt_metacast(_clname);
}

int StuProfile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
