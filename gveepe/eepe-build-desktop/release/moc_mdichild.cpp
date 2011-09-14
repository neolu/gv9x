/****************************************************************************
** Meta object code from reading C++ file 'mdichild.h'
**
** Created: Sun 24. Jul 13:56:13 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/mdichild.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mdichild.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MdiChild[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   10,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
      34,    9,    9,    9, 0x08,
      56,    9,    9,    9, 0x08,
      70,    9,    9,    9, 0x0a,
      91,   87,    9,    9, 0x0a,
     115,    9,    9,    9, 0x0a,
     121,    9,    9,    9, 0x0a,
     128,    9,    9,    9, 0x0a,
     136,    9,    9,    9, 0x0a,
     145,    9,    9,    9, 0x0a,
     156,    9,    9,    9, 0x0a,
     164,    9,    9,    9, 0x0a,
     180,  176,    9,    9, 0x0a,
     201,    9,    9,    9, 0x0a,
     219,  215,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MdiChild[] = {
    "MdiChild\0\0val\0copyAvailable(bool)\0"
    "documentWasModified()\0refreshList()\0"
    "OpenEditWindow()\0pos\0ShowContextMenu(QPoint)\0"
    "cut()\0copy()\0paste()\0burnTo()\0simulate()\0"
    "print()\0duplicate()\0ask\0deleteSelected(bool)\0"
    "setModified()\0idx\0viableModelSelected(int)\0"
};

const QMetaObject MdiChild::staticMetaObject = {
    { &QListWidget::staticMetaObject, qt_meta_stringdata_MdiChild,
      qt_meta_data_MdiChild, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MdiChild::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MdiChild::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MdiChild::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MdiChild))
        return static_cast<void*>(const_cast< MdiChild*>(this));
    return QListWidget::qt_metacast(_clname);
}

int MdiChild::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: copyAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: documentWasModified(); break;
        case 2: refreshList(); break;
        case 3: OpenEditWindow(); break;
        case 4: ShowContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 5: cut(); break;
        case 6: copy(); break;
        case 7: paste(); break;
        case 8: burnTo(); break;
        case 9: simulate(); break;
        case 10: print(); break;
        case 11: duplicate(); break;
        case 12: deleteSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: setModified(); break;
        case 14: viableModelSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void MdiChild::copyAvailable(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
