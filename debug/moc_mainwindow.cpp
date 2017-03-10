/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[25];
    char stringdata0[373];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 12), // "savesettings"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 4), // "name"
QT_MOC_LITERAL(4, 30, 8), // "baudrate"
QT_MOC_LITERAL(5, 39, 8), // "DataBits"
QT_MOC_LITERAL(6, 48, 6), // "Parity"
QT_MOC_LITERAL(7, 55, 8), // "StopBits"
QT_MOC_LITERAL(8, 64, 11), // "FlowControl"
QT_MOC_LITERAL(9, 76, 9), // "writeData"
QT_MOC_LITERAL(10, 86, 4), // "data"
QT_MOC_LITERAL(11, 91, 7), // "Connect"
QT_MOC_LITERAL(12, 99, 9), // "Disconect"
QT_MOC_LITERAL(13, 109, 24), // "on_SPEED_editingFinished"
QT_MOC_LITERAL(14, 134, 26), // "on_pushButton_play_clicked"
QT_MOC_LITERAL(15, 161, 23), // "on_pushButton_8_clicked"
QT_MOC_LITERAL(16, 185, 19), // "on_openFile_clicked"
QT_MOC_LITERAL(17, 205, 26), // "on_textOpenFile_textEdited"
QT_MOC_LITERAL(18, 232, 4), // "arg1"
QT_MOC_LITERAL(19, 237, 18), // "on_scanCom_clicked"
QT_MOC_LITERAL(20, 256, 24), // "on_connectButton_clicked"
QT_MOC_LITERAL(21, 281, 21), // "on_SPEED_valueChanged"
QT_MOC_LITERAL(22, 303, 31), // "on_sendToTerminalButton_clicked"
QT_MOC_LITERAL(23, 335, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(24, 357, 15) // "printToTerminal"

    },
    "MainWindow\0savesettings\0\0name\0baudrate\0"
    "DataBits\0Parity\0StopBits\0FlowControl\0"
    "writeData\0data\0Connect\0Disconect\0"
    "on_SPEED_editingFinished\0"
    "on_pushButton_play_clicked\0"
    "on_pushButton_8_clicked\0on_openFile_clicked\0"
    "on_textOpenFile_textEdited\0arg1\0"
    "on_scanCom_clicked\0on_connectButton_clicked\0"
    "on_SPEED_valueChanged\0"
    "on_sendToTerminalButton_clicked\0"
    "on_pushButton_clicked\0printToTerminal"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    6,   89,    2, 0x06 /* Public */,
       9,    1,  102,    2, 0x06 /* Public */,
      11,    0,  105,    2, 0x06 /* Public */,
      12,    0,  106,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,  107,    2, 0x08 /* Private */,
      14,    0,  108,    2, 0x08 /* Private */,
      15,    0,  109,    2, 0x08 /* Private */,
      16,    0,  110,    2, 0x08 /* Private */,
      17,    1,  111,    2, 0x08 /* Private */,
      19,    0,  114,    2, 0x08 /* Private */,
      20,    0,  115,    2, 0x08 /* Private */,
      21,    1,  116,    2, 0x08 /* Private */,
      22,    0,  119,    2, 0x0a /* Public */,
      23,    0,  120,    2, 0x0a /* Public */,
      24,    1,  121,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,    4,    5,    6,    7,    8,
    QMetaType::Void, QMetaType::QByteArray,   10,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   18,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->savesettings((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        case 1: _t->writeData((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 2: _t->Connect(); break;
        case 3: _t->Disconect(); break;
        case 4: _t->on_SPEED_editingFinished(); break;
        case 5: _t->on_pushButton_play_clicked(); break;
        case 6: _t->on_pushButton_8_clicked(); break;
        case 7: _t->on_openFile_clicked(); break;
        case 8: _t->on_textOpenFile_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->on_scanCom_clicked(); break;
        case 10: _t->on_connectButton_clicked(); break;
        case 11: _t->on_SPEED_valueChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->on_sendToTerminalButton_clicked(); break;
        case 14: _t->printToTerminal((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainWindow::*_t)(QString , int , int , int , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::savesettings)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(QByteArray );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::writeData)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::Connect)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::Disconect)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::savesettings(QString _t1, int _t2, int _t3, int _t4, int _t5, int _t6)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::writeData(QByteArray _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::Connect()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void MainWindow::Disconect()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
