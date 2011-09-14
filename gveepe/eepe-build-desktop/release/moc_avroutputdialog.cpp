/****************************************************************************
** Meta object code from reading C++ file 'avroutputdialog.h'
**
** Created: Sun 24. Jul 13:56:23 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/avroutputdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'avroutputdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_avrOutputDialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x09,
      35,   16,   16,   16, 0x09,
      53,   16,   16,   16, 0x09,
      77,   72,   16,   16, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_avrOutputDialog[] = {
    "avrOutputDialog\0\0doAddTextStdOut()\0"
    "doAddTextStdErr()\0doProcessStarted()\0"
    "code\0doFinished(int)\0"
};

const QMetaObject avrOutputDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_avrOutputDialog,
      qt_meta_data_avrOutputDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &avrOutputDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *avrOutputDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *avrOutputDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_avrOutputDialog))
        return static_cast<void*>(const_cast< avrOutputDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int avrOutputDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: doAddTextStdOut(); break;
        case 1: doAddTextStdErr(); break;
        case 2: doProcessStarted(); break;
        case 3: doFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
