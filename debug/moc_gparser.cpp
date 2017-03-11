/****************************************************************************
** Meta object code from reading C++ file 'gparser.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../gparser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gparser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GParser_t {
    QByteArrayData data[12];
    char stringdata0[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GParser_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GParser_t qt_meta_stringdata_GParser = {
    {
QT_MOC_LITERAL(0, 0, 7), // "GParser"
QT_MOC_LITERAL(1, 8, 11), // "cmdComplite"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 8), // "cmdError"
QT_MOC_LITERAL(4, 30, 9), // "cmdFinish"
QT_MOC_LITERAL(5, 40, 11), // "cmdResponse"
QT_MOC_LITERAL(6, 52, 10), // "cmdComment"
QT_MOC_LITERAL(7, 63, 8), // "ParseCmd"
QT_MOC_LITERAL(8, 72, 4), // "arg1"
QT_MOC_LITERAL(9, 77, 11), // "ParsingFile"
QT_MOC_LITERAL(10, 89, 4), // "data"
QT_MOC_LITERAL(11, 94, 9) // "ClearList"

    },
    "GParser\0cmdComplite\0\0cmdError\0cmdFinish\0"
    "cmdResponse\0cmdComment\0ParseCmd\0arg1\0"
    "ParsingFile\0data\0ClearList"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GParser[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    0,   56,    2, 0x06 /* Public */,
       5,    0,   57,    2, 0x06 /* Public */,
       6,    0,   58,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   59,    2, 0x0a /* Public */,
       9,    1,   62,    2, 0x0a /* Public */,
      11,    0,   65,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QStringList,   10,
    QMetaType::Void,

       0        // eod
};

void GParser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GParser *_t = static_cast<GParser *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->cmdComplite();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 1: { int _r = _t->cmdError();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 2: { int _r = _t->cmdFinish();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: { int _r = _t->cmdResponse();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: { int _r = _t->cmdComment();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: _t->ParseCmd((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->ParsingFile((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 7: _t->ClearList(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef int (GParser::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GParser::cmdComplite)) {
                *result = 0;
                return;
            }
        }
        {
            typedef int (GParser::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GParser::cmdError)) {
                *result = 1;
                return;
            }
        }
        {
            typedef int (GParser::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GParser::cmdFinish)) {
                *result = 2;
                return;
            }
        }
        {
            typedef int (GParser::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GParser::cmdResponse)) {
                *result = 3;
                return;
            }
        }
        {
            typedef int (GParser::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GParser::cmdComment)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject GParser::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GParser.data,
      qt_meta_data_GParser,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GParser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GParser::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GParser.stringdata0))
        return static_cast<void*>(const_cast< GParser*>(this));
    return QObject::qt_metacast(_clname);
}

int GParser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
int GParser::cmdComplite()
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}

// SIGNAL 1
int GParser::cmdError()
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
    return _t0;
}

// SIGNAL 2
int GParser::cmdFinish()
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
    return _t0;
}

// SIGNAL 3
int GParser::cmdResponse()
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
    return _t0;
}

// SIGNAL 4
int GParser::cmdComment()
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
    return _t0;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
