/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../musicplayer/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[23];
    char stringdata0[312];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 4), // "init"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 7), // "addItem"
QT_MOC_LITERAL(4, 25, 4), // "name"
QT_MOC_LITERAL(5, 30, 12), // "getFileNames"
QT_MOC_LITERAL(6, 43, 4), // "path"
QT_MOC_LITERAL(7, 48, 20), // "slotShowCurrentMusic"
QT_MOC_LITERAL(8, 69, 15), // "slotButtonStart"
QT_MOC_LITERAL(9, 85, 14), // "slotButtonnext"
QT_MOC_LITERAL(10, 100, 13), // "slotButtonpre"
QT_MOC_LITERAL(11, 114, 14), // "slotButtonshow"
QT_MOC_LITERAL(12, 129, 15), // "slotChooseMusic"
QT_MOC_LITERAL(13, 145, 18), // "slotPositionChange"
QT_MOC_LITERAL(14, 164, 8), // "position"
QT_MOC_LITERAL(15, 173, 16), // "slotSliderChange"
QT_MOC_LITERAL(16, 190, 14), // "slotSliderMove"
QT_MOC_LITERAL(17, 205, 20), // "slotVolumeBtnClicked"
QT_MOC_LITERAL(18, 226, 22), // "slotVolumeSliderChange"
QT_MOC_LITERAL(19, 249, 11), // "slotPixShow"
QT_MOC_LITERAL(20, 261, 12), // "slotCopySong"
QT_MOC_LITERAL(21, 274, 18), // "slotDeleteSongList"
QT_MOC_LITERAL(22, 293, 18) // "slotChangePlayMode"

    },
    "MainWindow\0init\0\0addItem\0name\0"
    "getFileNames\0path\0slotShowCurrentMusic\0"
    "slotButtonStart\0slotButtonnext\0"
    "slotButtonpre\0slotButtonshow\0"
    "slotChooseMusic\0slotPositionChange\0"
    "position\0slotSliderChange\0slotSliderMove\0"
    "slotVolumeBtnClicked\0slotVolumeSliderChange\0"
    "slotPixShow\0slotCopySong\0slotDeleteSongList\0"
    "slotChangePlayMode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x08 /* Private */,
       3,    1,  105,    2, 0x08 /* Private */,
       5,    1,  108,    2, 0x08 /* Private */,
       7,    0,  111,    2, 0x08 /* Private */,
       8,    0,  112,    2, 0x08 /* Private */,
       9,    0,  113,    2, 0x08 /* Private */,
      10,    0,  114,    2, 0x08 /* Private */,
      11,    0,  115,    2, 0x08 /* Private */,
      12,    0,  116,    2, 0x08 /* Private */,
      13,    1,  117,    2, 0x08 /* Private */,
      15,    0,  120,    2, 0x08 /* Private */,
      16,    1,  121,    2, 0x08 /* Private */,
      17,    0,  124,    2, 0x08 /* Private */,
      18,    1,  125,    2, 0x08 /* Private */,
      19,    0,  128,    2, 0x08 /* Private */,
      20,    0,  129,    2, 0x08 /* Private */,
      21,    0,  130,    2, 0x08 /* Private */,
      22,    0,  131,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::QStringList, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->init(); break;
        case 1: _t->addItem((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: { QStringList _r = _t->getFileNames((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->slotShowCurrentMusic(); break;
        case 4: _t->slotButtonStart(); break;
        case 5: _t->slotButtonnext(); break;
        case 6: _t->slotButtonpre(); break;
        case 7: _t->slotButtonshow(); break;
        case 8: _t->slotChooseMusic(); break;
        case 9: _t->slotPositionChange((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 10: _t->slotSliderChange(); break;
        case 11: _t->slotSliderMove((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->slotVolumeBtnClicked(); break;
        case 13: _t->slotVolumeSliderChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->slotPixShow(); break;
        case 15: _t->slotCopySong(); break;
        case 16: _t->slotDeleteSongList(); break;
        case 17: _t->slotChangePlayMode(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
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
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
