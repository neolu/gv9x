/****************************************************************************
** Meta object code from reading C++ file 'mixerslist.h'
**
** Created: Sat 17. Mar 22:37:47 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/mixerslist.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mixerslist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MixersList[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   12,   11,   11, 0x05,
      85,   79,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     116,   12,  111,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MixersList[] = {
    "MixersList\0\0index,data,action\0"
    "mimeDropped(int,const QMimeData*,Qt::DropAction)\0"
    "event\0keyWasPressed(QKeyEvent*)\0bool\0"
    "dropMimeData(int,const QMimeData*,Qt::DropAction)\0"
};

const QMetaObject MixersList::staticMetaObject = {
    { &QListWidget::staticMetaObject, qt_meta_stringdata_MixersList,
      qt_meta_data_MixersList, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MixersList::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MixersList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MixersList::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MixersList))
        return static_cast<void*>(const_cast< MixersList*>(this));
    return QListWidget::qt_metacast(_clname);
}

int MixersList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: mimeDropped((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QMimeData*(*)>(_a[2])),(*reinterpret_cast< Qt::DropAction(*)>(_a[3]))); break;
        case 1: keyWasPressed((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 2: { bool _r = dropMimeData((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QMimeData*(*)>(_a[2])),(*reinterpret_cast< Qt::DropAction(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void MixersList::mimeDropped(int _t1, const QMimeData * _t2, Qt::DropAction _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MixersList::keyWasPressed(QKeyEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
