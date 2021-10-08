/****************************************************************************
** Meta object code from reading C++ file 'multicolor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Qt_Opencv_version_2_0/multicolor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'multicolor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Multicolor_t {
    QByteArrayData data[8];
    char stringdata0[184];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Multicolor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Multicolor_t qt_meta_stringdata_Multicolor = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Multicolor"
QT_MOC_LITERAL(1, 11, 22), // "multicolor_back_Signal"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 26), // "on_multicolor_back_clicked"
QT_MOC_LITERAL(4, 62, 31), // "on_multicolor_video_btn_clicked"
QT_MOC_LITERAL(5, 94, 30), // "on_multicolor_save_btn_clicked"
QT_MOC_LITERAL(6, 125, 26), // "on_draw_radius_btn_clicked"
QT_MOC_LITERAL(7, 152, 31) // "on_multicolor_graph_btn_clicked"

    },
    "Multicolor\0multicolor_back_Signal\0\0"
    "on_multicolor_back_clicked\0"
    "on_multicolor_video_btn_clicked\0"
    "on_multicolor_save_btn_clicked\0"
    "on_draw_radius_btn_clicked\0"
    "on_multicolor_graph_btn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Multicolor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Multicolor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Multicolor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->multicolor_back_Signal(); break;
        case 1: _t->on_multicolor_back_clicked(); break;
        case 2: _t->on_multicolor_video_btn_clicked(); break;
        case 3: _t->on_multicolor_save_btn_clicked(); break;
        case 4: _t->on_draw_radius_btn_clicked(); break;
        case 5: _t->on_multicolor_graph_btn_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Multicolor::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Multicolor::multicolor_back_Signal)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Multicolor::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_Multicolor.data,
    qt_meta_data_Multicolor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Multicolor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Multicolor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Multicolor.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Multicolor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Multicolor::multicolor_back_Signal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
