/****************************************************************************
** Meta object code from reading C++ file 'passwordgenerator.h'
**
** Created: Tue Mar 16 11:27:20 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "passwordgenerator.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'passwordgenerator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_PasswordGenerator[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x08,
      42,   18,   18,   18, 0x08,
      66,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PasswordGenerator[] = {
    "PasswordGenerator\0\0on_CopierMdp_clicked()\0"
    "on_pushButton_clicked()\0"
    "on_ActionMenu_triggered()\0"
};

const QMetaObject PasswordGenerator::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_PasswordGenerator,
      qt_meta_data_PasswordGenerator, 0 }
};

const QMetaObject *PasswordGenerator::metaObject() const
{
    return &staticMetaObject;
}

void *PasswordGenerator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PasswordGenerator))
	return static_cast<void*>(const_cast< PasswordGenerator*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int PasswordGenerator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_CopierMdp_clicked(); break;
        case 1: on_pushButton_clicked(); break;
        case 2: on_ActionMenu_triggered(); break;
        }
        _id -= 3;
    }
    return _id;
}
