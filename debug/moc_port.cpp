/****************************************************************************
** Meta object code from reading C++ file 'port.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../port.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'port.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Port_t {
    QByteArrayData data[23];
    char stringdata0[236];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Port_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Port_t qt_meta_stringdata_Port = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Port"
QT_MOC_LITERAL(1, 5, 13), // "finished_Port"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 6), // "error_"
QT_MOC_LITERAL(4, 27, 3), // "err"
QT_MOC_LITERAL(5, 31, 7), // "outPort"
QT_MOC_LITERAL(6, 39, 4), // "data"
QT_MOC_LITERAL(7, 44, 10), // "disconnect"
QT_MOC_LITERAL(8, 55, 14), // "DisconnectPort"
QT_MOC_LITERAL(9, 70, 11), // "ConnectPort"
QT_MOC_LITERAL(10, 82, 19), // "Write_Settings_Port"
QT_MOC_LITERAL(11, 102, 4), // "name"
QT_MOC_LITERAL(12, 107, 8), // "baudrate"
QT_MOC_LITERAL(13, 116, 8), // "DataBits"
QT_MOC_LITERAL(14, 125, 6), // "Parity"
QT_MOC_LITERAL(15, 132, 8), // "StopBits"
QT_MOC_LITERAL(16, 141, 11), // "FlowControl"
QT_MOC_LITERAL(17, 153, 12), // "process_Port"
QT_MOC_LITERAL(18, 166, 11), // "WriteToPort"
QT_MOC_LITERAL(19, 178, 10), // "ReadInPort"
QT_MOC_LITERAL(20, 189, 11), // "handleError"
QT_MOC_LITERAL(21, 201, 28), // "QSerialPort::SerialPortError"
QT_MOC_LITERAL(22, 230, 5) // "error"

    },
    "Port\0finished_Port\0\0error_\0err\0outPort\0"
    "data\0disconnect\0DisconnectPort\0"
    "ConnectPort\0Write_Settings_Port\0name\0"
    "baudrate\0DataBits\0Parity\0StopBits\0"
    "FlowControl\0process_Port\0WriteToPort\0"
    "ReadInPort\0handleError\0"
    "QSerialPort::SerialPortError\0error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Port[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    1,   70,    2, 0x06 /* Public */,
       5,    1,   73,    2, 0x06 /* Public */,
       7,    0,   76,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   77,    2, 0x0a /* Public */,
       9,    0,   78,    2, 0x0a /* Public */,
      10,    6,   79,    2, 0x0a /* Public */,
      17,    0,   92,    2, 0x0a /* Public */,
      18,    1,   93,    2, 0x0a /* Public */,
      19,    0,   96,    2, 0x0a /* Public */,
      20,    1,   97,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   11,   12,   13,   14,   15,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 21,   22,

       0        // eod
};

void Port::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Port *_t = static_cast<Port *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished_Port(); break;
        case 1: _t->error_((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->outPort((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->disconnect(); break;
        case 4: _t->DisconnectPort(); break;
        case 5: _t->ConnectPort(); break;
        case 6: _t->Write_Settings_Port((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        case 7: _t->process_Port(); break;
        case 8: _t->WriteToPort((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 9: _t->ReadInPort(); break;
        case 10: _t->handleError((*reinterpret_cast< QSerialPort::SerialPortError(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Port::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Port::finished_Port)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Port::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Port::error_)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Port::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Port::outPort)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Port::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Port::disconnect)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject Port::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Port.data,
      qt_meta_data_Port,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Port::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Port::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Port.stringdata0))
        return static_cast<void*>(const_cast< Port*>(this));
    return QObject::qt_metacast(_clname);
}

int Port::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void Port::finished_Port()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Port::error_(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Port::outPort(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Port::disconnect()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
