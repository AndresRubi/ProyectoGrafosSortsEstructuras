/****************************************************************************
** Meta object code from reading C++ file 'sorts.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ProyectoEstructuraGrafosSorts/sorts.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sorts.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Sorts_t {
    QByteArrayData data[9];
    char stringdata[191];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Sorts_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Sorts_t qt_meta_stringdata_Sorts = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Sorts"
QT_MOC_LITERAL(1, 6, 31), // "on_pushButtonBubbleSort_clicked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 24), // "on_pushLoadArray_clicked"
QT_MOC_LITERAL(4, 64, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(5, 86, 25), // "on_pushButtonHeap_clicked"
QT_MOC_LITERAL(6, 112, 26), // "on_pushButtonQuick_clicked"
QT_MOC_LITERAL(7, 139, 26), // "on_pushButtonMerge_clicked"
QT_MOC_LITERAL(8, 166, 24) // "on_pushButtonRun_clicked"

    },
    "Sorts\0on_pushButtonBubbleSort_clicked\0"
    "\0on_pushLoadArray_clicked\0"
    "on_pushButton_clicked\0on_pushButtonHeap_clicked\0"
    "on_pushButtonQuick_clicked\0"
    "on_pushButtonMerge_clicked\0"
    "on_pushButtonRun_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Sorts[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Sorts::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Sorts *_t = static_cast<Sorts *>(_o);
        switch (_id) {
        case 0: _t->on_pushButtonBubbleSort_clicked(); break;
        case 1: _t->on_pushLoadArray_clicked(); break;
        case 2: _t->on_pushButton_clicked(); break;
        case 3: _t->on_pushButtonHeap_clicked(); break;
        case 4: _t->on_pushButtonQuick_clicked(); break;
        case 5: _t->on_pushButtonMerge_clicked(); break;
        case 6: _t->on_pushButtonRun_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Sorts::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Sorts.data,
      qt_meta_data_Sorts,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Sorts::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Sorts::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Sorts.stringdata))
        return static_cast<void*>(const_cast< Sorts*>(this));
    return QWidget::qt_metacast(_clname);
}

int Sorts::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
