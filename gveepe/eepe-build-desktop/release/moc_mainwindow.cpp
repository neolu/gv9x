/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Sat 17. Mar 22:37:20 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      34,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   12,   11,   11, 0x08,
      49,   12,   11,   11, 0x08,
      80,   11,   11,   11, 0x08,
      97,   11,   11,   11, 0x08,
     114,   11,   11,   11, 0x08,
     124,   11,   11,   11, 0x08,
     131,   11,   11,   11, 0x08,
     138,   11,   11,   11, 0x08,
     147,   11,   11,   11, 0x08,
     153,   11,   11,   11, 0x08,
     160,   11,   11,   11, 0x08,
     168,   11,   11,   11, 0x08,
     177,   11,   11,   11, 0x08,
     200,  188,   11,   11, 0x08,
     221,   11,   11,   11, 0x28,
     235,   11,   11,   11, 0x08,
     251,   11,   11,   11, 0x08,
     273,   11,   11,   11, 0x08,
     297,   11,   11,   11, 0x08,
     310,   11,   11,   11, 0x08,
     321,   11,   11,   11, 0x08,
     333,   11,   11,   11, 0x08,
     344,   11,   11,   11, 0x08,
     352,   11,   11,   11, 0x08,
     360,   11,   11,   11, 0x08,
     374,   11,   11,   11, 0x08,
     385,   11,   11,   11, 0x08,
     402,   11,   11,   11, 0x08,
     416,   11,   11,   11, 0x08,
     445,   11,  435,   11, 0x08,
     462,   11,   11,   11, 0x08,
     493,  486,   11,   11, 0x08,
     522,   11,   11,   11, 0x08,
     542,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0reply\0reply1Finished(QNetworkReply*)\0"
    "reply2Finished(QNetworkReply*)\0"
    "reply1Accepted()\0reply2Accepted()\0"
    "newFile()\0open()\0save()\0saveAs()\0cut()\0"
    "copy()\0paste()\0burnTo()\0burnFrom()\0"
    "fileToFlash\0burnToFlash(QString)\0"
    "burnToFlash()\0burnFromFlash()\0"
    "burnExtenalToEEPROM()\0burnExtenalFromEEPROM()\0"
    "burnConfig()\0burnList()\0burnFuses()\0"
    "simulate()\0about()\0print()\0preferences()\0"
    "donators()\0showEr9xManual()\0updateMenus()\0"
    "updateWindowMenu()\0MdiChild*\0"
    "createMdiChild()\0switchLayoutDirection()\0"
    "window\0setActiveSubWindow(QWidget*)\0"
    "loadModelFromFile()\0saveModelToFile()\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: reply1Finished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 1: reply2Finished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 2: reply1Accepted(); break;
        case 3: reply2Accepted(); break;
        case 4: newFile(); break;
        case 5: open(); break;
        case 6: save(); break;
        case 7: saveAs(); break;
        case 8: cut(); break;
        case 9: copy(); break;
        case 10: paste(); break;
        case 11: burnTo(); break;
        case 12: burnFrom(); break;
        case 13: burnToFlash((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: burnToFlash(); break;
        case 15: burnFromFlash(); break;
        case 16: burnExtenalToEEPROM(); break;
        case 17: burnExtenalFromEEPROM(); break;
        case 18: burnConfig(); break;
        case 19: burnList(); break;
        case 20: burnFuses(); break;
        case 21: simulate(); break;
        case 22: about(); break;
        case 23: print(); break;
        case 24: preferences(); break;
        case 25: donators(); break;
        case 26: showEr9xManual(); break;
        case 27: updateMenus(); break;
        case 28: updateWindowMenu(); break;
        case 29: { MdiChild* _r = createMdiChild();
            if (_a[0]) *reinterpret_cast< MdiChild**>(_a[0]) = _r; }  break;
        case 30: switchLayoutDirection(); break;
        case 31: setActiveSubWindow((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 32: loadModelFromFile(); break;
        case 33: saveModelToFile(); break;
        default: ;
        }
        _id -= 34;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
