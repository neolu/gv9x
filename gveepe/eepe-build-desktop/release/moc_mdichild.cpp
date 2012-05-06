/****************************************************************************
** Meta object code from reading C++ file 'mdichild.h'
**
** Created: Sat 17. Mar 22:37:26 2012
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
      24,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   10,    9,    9, 0x05,
      34,   10,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
      65,    9,    9,    9, 0x08,
      87,    9,    9,    9, 0x08,
     146,  106,  101,    9, 0x08,
     217,  188,  101,    9, 0x28,
     277,  255,  101,    9, 0x28,
     307,  188,  101,    9, 0x08,
     345,  255,  101,    9, 0x28,
     375,    9,    9,    9, 0x0a,
     396,  392,    9,    9, 0x0a,
     420,    9,    9,    9, 0x0a,
     426,    9,    9,    9, 0x0a,
     433,    9,    9,    9, 0x0a,
     444,  441,  101,    9, 0x0a,
     471,    9,  101,    9, 0x2a,
     491,    9,    9,    9, 0x0a,
     509,    9,    9,    9, 0x0a,
     518,    9,    9,    9, 0x0a,
     529,    9,    9,    9, 0x0a,
     537,    9,    9,    9, 0x0a,
     553,  549,    9,    9, 0x0a,
     574,    9,    9,    9, 0x0a,
     592,  588,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MdiChild[] = {
    "MdiChild\0\0val\0copyAvailable(bool)\0"
    "saveModelToFileAvailable(bool)\0"
    "documentWasModified()\0refreshList()\0"
    "bool\0fileName,data,datalen,header,notesIndex\0"
    "saveiHEX(QString,quint8*,int,QString,int)\0"
    "fileName,data,datalen,header\0"
    "saveiHEX(QString,quint8*,int,QString)\0"
    "fileName,data,datalen\0"
    "saveiHEX(QString,quint8*,int)\0"
    "loadiHEX(QString,quint8*,int,QString)\0"
    "loadiHEX(QString,quint8*,int)\0"
    "OpenEditWindow()\0pos\0ShowContextMenu(QPoint)\0"
    "cut()\0copy()\0paste()\0fn\0"
    "loadModelFromFile(QString)\0"
    "loadModelFromFile()\0saveModelToFile()\0"
    "burnTo()\0simulate()\0print()\0duplicate()\0"
    "ask\0deleteSelected(bool)\0setModified()\0"
    "idx\0viableModelSelected(int)\0"
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
        case 1: saveModelToFileAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: documentWasModified(); break;
        case 3: refreshList(); break;
        case 4: { bool _r = saveiHEX((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< quint8*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = saveiHEX((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< quint8*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = saveiHEX((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< quint8*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = loadiHEX((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< quint8*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = loadiHEX((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< quint8*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: OpenEditWindow(); break;
        case 10: ShowContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 11: cut(); break;
        case 12: copy(); break;
        case 13: paste(); break;
        case 14: { bool _r = loadModelFromFile((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = loadModelFromFile();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: saveModelToFile(); break;
        case 17: burnTo(); break;
        case 18: simulate(); break;
        case 19: print(); break;
        case 20: duplicate(); break;
        case 21: deleteSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: setModified(); break;
        case 23: viableModelSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 24;
    }
    return _id;
}

// SIGNAL 0
void MdiChild::copyAvailable(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MdiChild::saveModelToFileAvailable(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
