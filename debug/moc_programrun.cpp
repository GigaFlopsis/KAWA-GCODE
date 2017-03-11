/****************************************************************************
** Meta object code from reading C++ file 'programrun.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../programrun.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'programrun.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ProgramRun_t {
    QByteArrayData data[18];
    char stringdata0[154];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ProgramRun_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ProgramRun_t qt_meta_stringdata_ProgramRun = {
    {
QT_MOC_LITERAL(0, 0, 10), // "ProgramRun"
QT_MOC_LITERAL(1, 11, 8), // "NextMove"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 8), // "StopMove"
QT_MOC_LITERAL(4, 30, 4), // "Move"
QT_MOC_LITERAL(5, 35, 4), // "move"
QT_MOC_LITERAL(6, 40, 10), // "FinishMove"
QT_MOC_LITERAL(7, 51, 7), // "GetList"
QT_MOC_LITERAL(8, 59, 17), // "QList<paramPoint>"
QT_MOC_LITERAL(9, 77, 3), // "pos"
QT_MOC_LITERAL(10, 81, 7), // "setStep"
QT_MOC_LITERAL(11, 89, 4), // "step"
QT_MOC_LITERAL(12, 94, 8), // "nextStep"
QT_MOC_LITERAL(13, 103, 8), // "prevStep"
QT_MOC_LITERAL(14, 112, 8), // "PlayMove"
QT_MOC_LITERAL(15, 121, 11), // "StopProgram"
QT_MOC_LITERAL(16, 133, 12), // "StartProgram"
QT_MOC_LITERAL(17, 146, 7) // "posList"

    },
    "ProgramRun\0NextMove\0\0StopMove\0Move\0"
    "move\0FinishMove\0GetList\0QList<paramPoint>\0"
    "pos\0setStep\0step\0nextStep\0prevStep\0"
    "PlayMove\0StopProgram\0StartProgram\0"
    "posList"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ProgramRun[] = {

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
       3,    0,   70,    2, 0x06 /* Public */,
       4,    1,   71,    2, 0x06 /* Public */,
       6,    0,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   75,    2, 0x0a /* Public */,
      10,    1,   78,    2, 0x0a /* Public */,
      12,    0,   81,    2, 0x0a /* Public */,
      13,    0,   82,    2, 0x0a /* Public */,
      14,    0,   83,    2, 0x0a /* Public */,
      15,    0,   84,    2, 0x0a /* Public */,
      16,    1,   85,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int, QMetaType::QByteArray,    5,
    QMetaType::Int,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,   17,

       0        // eod
};

void ProgramRun::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ProgramRun *_t = static_cast<ProgramRun *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->NextMove();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 1: { int _r = _t->StopMove();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 2: { int _r = _t->Move((*reinterpret_cast< QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: { int _r = _t->FinishMove();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: _t->GetList((*reinterpret_cast< const QList<paramPoint>(*)>(_a[1]))); break;
        case 5: _t->setStep((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->nextStep(); break;
        case 7: _t->prevStep(); break;
        case 8: _t->PlayMove(); break;
        case 9: _t->StopProgram(); break;
        case 10: _t->StartProgram((*reinterpret_cast< const QList<paramPoint>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<paramPoint> >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<paramPoint> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef int (ProgramRun::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProgramRun::NextMove)) {
                *result = 0;
                return;
            }
        }
        {
            typedef int (ProgramRun::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProgramRun::StopMove)) {
                *result = 1;
                return;
            }
        }
        {
            typedef int (ProgramRun::*_t)(QByteArray );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProgramRun::Move)) {
                *result = 2;
                return;
            }
        }
        {
            typedef int (ProgramRun::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProgramRun::FinishMove)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject ProgramRun::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ProgramRun.data,
      qt_meta_data_ProgramRun,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ProgramRun::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProgramRun::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ProgramRun.stringdata0))
        return static_cast<void*>(const_cast< ProgramRun*>(this));
    return QObject::qt_metacast(_clname);
}

int ProgramRun::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
int ProgramRun::NextMove()
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}

// SIGNAL 1
int ProgramRun::StopMove()
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
    return _t0;
}

// SIGNAL 2
int ProgramRun::Move(QByteArray _t1)
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
    return _t0;
}

// SIGNAL 3
int ProgramRun::FinishMove()
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
    return _t0;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
