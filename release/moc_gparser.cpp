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
#include <QtCore/QList>
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
    QByteArrayData data[19];
    char stringdata0[167];
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
QT_MOC_LITERAL(7, 63, 7), // "filePos"
QT_MOC_LITERAL(8, 71, 17), // "QList<paramPoint>"
QT_MOC_LITERAL(9, 89, 4), // "List"
QT_MOC_LITERAL(10, 94, 9), // "fileLengt"
QT_MOC_LITERAL(11, 104, 4), // "line"
QT_MOC_LITERAL(12, 109, 8), // "CoutList"
QT_MOC_LITERAL(13, 118, 4), // "data"
QT_MOC_LITERAL(14, 123, 8), // "ParseCmd"
QT_MOC_LITERAL(15, 132, 4), // "arg1"
QT_MOC_LITERAL(16, 137, 11), // "ParsingFile"
QT_MOC_LITERAL(17, 149, 9), // "ClearList"
QT_MOC_LITERAL(18, 159, 7) // "SetList"

    },
    "GParser\0cmdComplite\0\0cmdError\0cmdFinish\0"
    "cmdResponse\0cmdComment\0filePos\0"
    "QList<paramPoint>\0List\0fileLengt\0line\0"
    "CoutList\0data\0ParseCmd\0arg1\0ParsingFile\0"
    "ClearList\0SetList"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GParser[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    0,   75,    2, 0x06 /* Public */,
       4,    0,   76,    2, 0x06 /* Public */,
       5,    0,   77,    2, 0x06 /* Public */,
       6,    0,   78,    2, 0x06 /* Public */,
       7,    1,   79,    2, 0x06 /* Public */,
      10,    1,   82,    2, 0x06 /* Public */,
      12,    1,   85,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    1,   88,    2, 0x0a /* Public */,
      16,    1,   91,    2, 0x0a /* Public */,
      17,    0,   94,    2, 0x0a /* Public */,
      18,    0,   95,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int, 0x80000000 | 8,    9,
    QMetaType::Int, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::QString,   13,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::QStringList,   13,
    QMetaType::Void,
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
        case 5: { int _r = _t->filePos((*reinterpret_cast< QList<paramPoint>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: { int _r = _t->fileLengt((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: _t->CoutList((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->ParseCmd((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->ParsingFile((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 10: _t->ClearList(); break;
        case 11: _t->SetList(); break;
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
        {
            typedef int (GParser::*_t)(QList<paramPoint> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GParser::filePos)) {
                *result = 5;
                return;
            }
        }
        {
            typedef int (GParser::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GParser::fileLengt)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (GParser::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GParser::CoutList)) {
                *result = 7;
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
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
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

// SIGNAL 5
int GParser::filePos(QList<paramPoint> _t1)
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
    return _t0;
}

// SIGNAL 6
int GParser::fileLengt(int _t1)
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
    return _t0;
}

// SIGNAL 7
void GParser::CoutList(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
