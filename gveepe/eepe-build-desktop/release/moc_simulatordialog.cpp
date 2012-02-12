/****************************************************************************
** Meta object code from reading C++ file 'simulatordialog.h'
**
** Created: Sun 12. Feb 17:27:13 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/simulatordialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'simulatordialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_simulatorDialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   17,   16,   16, 0x08,
      52,   17,   16,   16, 0x08,
      79,   17,   16,   16, 0x08,
     105,   17,   16,   16, 0x08,
     131,   17,   16,   16, 0x08,
     159,   17,   16,   16, 0x08,
     187,   17,   16,   16, 0x08,
     214,   17,   16,   16, 0x08,
     241,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_simulatorDialog[] = {
    "simulatorDialog\0\0checked\0"
    "on_FixRightY_clicked(bool)\0"
    "on_FixRightX_clicked(bool)\0"
    "on_FixLeftY_clicked(bool)\0"
    "on_FixLeftX_clicked(bool)\0"
    "on_holdRightY_clicked(bool)\0"
    "on_holdRightX_clicked(bool)\0"
    "on_holdLeftY_clicked(bool)\0"
    "on_holdLeftX_clicked(bool)\0timerEvent()\0"
};

const QMetaObject simulatorDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_simulatorDialog,
      qt_meta_data_simulatorDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &simulatorDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *simulatorDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *simulatorDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_simulatorDialog))
        return static_cast<void*>(const_cast< simulatorDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int simulatorDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_FixRightY_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: on_FixRightX_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: on_FixLeftY_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: on_FixLeftX_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: on_holdRightY_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: on_holdRightX_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: on_holdLeftY_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: on_holdLeftX_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: timerEvent(); break;
        default: ;
        }
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
