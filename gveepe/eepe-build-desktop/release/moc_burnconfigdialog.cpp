/****************************************************************************
** Meta object code from reading C++ file 'burnconfigdialog.h'
**
** Created: Sun 12. Feb 17:27:07 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/burnconfigdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'burnconfigdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_burnConfigDialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x08,
      47,   17,   17,   17, 0x08,
      73,   17,   17,   17, 0x08,
      99,   17,   17,   17, 0x08,
     123,   17,   17,   17, 0x08,
     161,   17,   17,   17, 0x08,
     212,   17,   17,   17, 0x08,
     256,   17,   17,   17, 0x08,
     301,   17,   17,   17, 0x08,
     315,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_burnConfigDialog[] = {
    "burnConfigDialog\0\0on_avrArgs_editingFinished()\0"
    "on_pushButton_4_clicked()\0"
    "on_pushButton_3_clicked()\0"
    "on_pushButton_clicked()\0"
    "on_avrdude_location_editingFinished()\0"
    "on_avrdude_programmer_currentIndexChanged(QString)\0"
    "on_avrdude_mcu_currentIndexChanged(QString)\0"
    "on_avrdude_port_currentIndexChanged(QString)\0"
    "getSettings()\0putSettings()\0"
};

const QMetaObject burnConfigDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_burnConfigDialog,
      qt_meta_data_burnConfigDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &burnConfigDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *burnConfigDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *burnConfigDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_burnConfigDialog))
        return static_cast<void*>(const_cast< burnConfigDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int burnConfigDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_avrArgs_editingFinished(); break;
        case 1: on_pushButton_4_clicked(); break;
        case 2: on_pushButton_3_clicked(); break;
        case 3: on_pushButton_clicked(); break;
        case 4: on_avrdude_location_editingFinished(); break;
        case 5: on_avrdude_programmer_currentIndexChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: on_avrdude_mcu_currentIndexChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: on_avrdude_port_currentIndexChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: getSettings(); break;
        case 9: putSettings(); break;
        default: ;
        }
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
