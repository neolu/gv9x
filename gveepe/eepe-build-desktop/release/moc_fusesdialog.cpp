/****************************************************************************
** Meta object code from reading C++ file 'fusesdialog.h'
**
** Created: Sat 17. Mar 22:37:46 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/fusesdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fusesdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_fusesDialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x08,
      36,   12,   12,   12, 0x08,
      69,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_fusesDialog[] = {
    "fusesDialog\0\0on_readFuses_clicked()\0"
    "on_resetFuses_EEdelete_clicked()\0"
    "on_resetFuses_EEprotect_clicked()\0"
};

const QMetaObject fusesDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_fusesDialog,
      qt_meta_data_fusesDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &fusesDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *fusesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *fusesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_fusesDialog))
        return static_cast<void*>(const_cast< fusesDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int fusesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_readFuses_clicked(); break;
        case 1: on_resetFuses_EEdelete_clicked(); break;
        case 2: on_resetFuses_EEprotect_clicked(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
