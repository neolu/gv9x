/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Sun 24. Jul 13:56:01 2011
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
      27,   12,   11,   11, 0x08,
      49,   11,   11,   11, 0x28,
      73,   67,   11,   11, 0x08,
     104,   67,   11,   11, 0x08,
     135,   11,   11,   11, 0x08,
     152,   11,   11,   11, 0x08,
     169,   11,   11,   11, 0x08,
     179,   11,   11,   11, 0x08,
     186,   11,   11,   11, 0x08,
     193,   11,   11,   11, 0x08,
     202,   11,   11,   11, 0x08,
     208,   11,   11,   11, 0x08,
     215,   11,   11,   11, 0x08,
     223,   11,   11,   11, 0x08,
     232,   11,   11,   11, 0x08,
     255,  243,   11,   11, 0x08,
     276,   11,   11,   11, 0x28,
     290,   11,   11,   11, 0x08,
     306,   11,   11,   11, 0x08,
     328,   11,   11,   11, 0x08,
     352,   11,   11,   11, 0x08,
     365,   11,   11,   11, 0x08,
     376,   11,   11,   11, 0x08,
     388,   11,   11,   11, 0x08,
     399,   11,   11,   11, 0x08,
     407,   11,   11,   11, 0x08,
     415,   11,   11,   11, 0x08,
     429,   11,   11,   11, 0x08,
     440,   11,   11,   11, 0x08,
     457,   11,   11,   11, 0x08,
     471,   11,   11,   11, 0x08,
     500,   11,  490,   11, 0x08,
     517,   11,   11,   11, 0x08,
     548,  541,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0ignoreSettings\0"
    "checkForUpdates(bool)\0checkForUpdates()\0"
    "reply\0reply1Finished(QNetworkReply*)\0"
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
        case 0: checkForUpdates((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: checkForUpdates(); break;
        case 2: reply1Finished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 3: reply2Finished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 4: reply1Accepted(); break;
        case 5: reply2Accepted(); break;
        case 6: newFile(); break;
        case 7: open(); break;
        case 8: save(); break;
        case 9: saveAs(); break;
        case 10: cut(); break;
        case 11: copy(); break;
        case 12: paste(); break;
        case 13: burnTo(); break;
        case 14: burnFrom(); break;
        case 15: burnToFlash((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 16: burnToFlash(); break;
        case 17: burnFromFlash(); break;
        case 18: burnExtenalToEEPROM(); break;
        case 19: burnExtenalFromEEPROM(); break;
        case 20: burnConfig(); break;
        case 21: burnList(); break;
        case 22: burnFuses(); break;
        case 23: simulate(); break;
        case 24: about(); break;
        case 25: print(); break;
        case 26: preferences(); break;
        case 27: donators(); break;
        case 28: showEr9xManual(); break;
        case 29: updateMenus(); break;
        case 30: updateWindowMenu(); break;
        case 31: { MdiChild* _r = createMdiChild();
            if (_a[0]) *reinterpret_cast< MdiChild**>(_a[0]) = _r; }  break;
        case 32: switchLayoutDirection(); break;
        case 33: setActiveSubWindow((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 34;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
