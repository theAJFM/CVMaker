/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[18];
    char stringdata[375];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_MainWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 20),
QT_MOC_LITERAL(2, 32, 0),
QT_MOC_LITERAL(3, 33, 23),
QT_MOC_LITERAL(4, 57, 17),
QT_MOC_LITERAL(5, 75, 23),
QT_MOC_LITERAL(6, 99, 23),
QT_MOC_LITERAL(7, 123, 26),
QT_MOC_LITERAL(8, 150, 29),
QT_MOC_LITERAL(9, 180, 30),
QT_MOC_LITERAL(10, 211, 19),
QT_MOC_LITERAL(11, 231, 21),
QT_MOC_LITERAL(12, 253, 20),
QT_MOC_LITERAL(13, 274, 25),
QT_MOC_LITERAL(14, 300, 21),
QT_MOC_LITERAL(15, 322, 15),
QT_MOC_LITERAL(16, 338, 18),
QT_MOC_LITERAL(17, 357, 16)
    },
    "MainWindow\0on_education_clicked\0\0"
    "on_pushButton_2_clicked\0on_skills_clicked\0"
    "on_actionSave_triggered\0on_actionOpen_triggered\0"
    "on_actionSave_As_triggered\0"
    "on_actionDark_Theme_triggered\0"
    "on_actionLight_Theme_triggered\0"
    "on_checkBox_clicked\0on_checkBox_2_clicked\0"
    "on_basicInfo_clicked\0on_selectTemplate_clicked\0"
    "on_pushButton_clicked\0on_work_clicked\0"
    "on_htmlgen_clicked\0on_image_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x08,
       3,    0,   95,    2, 0x08,
       4,    0,   96,    2, 0x08,
       5,    0,   97,    2, 0x08,
       6,    0,   98,    2, 0x08,
       7,    0,   99,    2, 0x08,
       8,    0,  100,    2, 0x08,
       9,    0,  101,    2, 0x08,
      10,    0,  102,    2, 0x08,
      11,    0,  103,    2, 0x08,
      12,    0,  104,    2, 0x08,
      13,    0,  105,    2, 0x08,
      14,    0,  106,    2, 0x08,
      15,    0,  107,    2, 0x08,
      16,    0,  108,    2, 0x08,
      17,    0,  109,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
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
        switch (_id) {
        case 0: _t->on_education_clicked(); break;
        case 1: _t->on_pushButton_2_clicked(); break;
        case 2: _t->on_skills_clicked(); break;
        case 3: _t->on_actionSave_triggered(); break;
        case 4: _t->on_actionOpen_triggered(); break;
        case 5: _t->on_actionSave_As_triggered(); break;
        case 6: _t->on_actionDark_Theme_triggered(); break;
        case 7: _t->on_actionLight_Theme_triggered(); break;
        case 8: _t->on_checkBox_clicked(); break;
        case 9: _t->on_checkBox_2_clicked(); break;
        case 10: _t->on_basicInfo_clicked(); break;
        case 11: _t->on_selectTemplate_clicked(); break;
        case 12: _t->on_pushButton_clicked(); break;
        case 13: _t->on_work_clicked(); break;
        case 14: _t->on_htmlgen_clicked(); break;
        case 15: _t->on_image_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
