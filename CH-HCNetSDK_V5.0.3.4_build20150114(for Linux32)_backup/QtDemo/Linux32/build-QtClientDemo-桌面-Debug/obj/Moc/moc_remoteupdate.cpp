/****************************************************************************
** Meta object code from reading C++ file 'remoteupdate.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/ManageDevice/Update/remoteupdate.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'remoteupdate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RemoteUpdate[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   14,   13,   13, 0x08,
      57,   13,   13,   13, 0x08,
      96,   13,   13,   13, 0x08,
     127,   13,   13,   13, 0x08,
     158,   13,   13,   13, 0x08,
     189,   13,   13,   13, 0x08,
     215,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_RemoteUpdate[] = {
    "RemoteUpdate\0\0index\0"
    "on_comboBox_currentIndexChanged(int)\0"
    "on_pushButton_setnetworktype_clicked()\0"
    "on_pushButton_browse_clicked()\0"
    "on_pushButton_update_clicked()\0"
    "on_pushButton_cancel_clicked()\0"
    "on_lineEdit_textChanged()\0OnTimer()\0"
};

void RemoteUpdate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RemoteUpdate *_t = static_cast<RemoteUpdate *>(_o);
        switch (_id) {
        case 0: _t->on_comboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_pushButton_setnetworktype_clicked(); break;
        case 2: _t->on_pushButton_browse_clicked(); break;
        case 3: _t->on_pushButton_update_clicked(); break;
        case 4: _t->on_pushButton_cancel_clicked(); break;
        case 5: _t->on_lineEdit_textChanged(); break;
        case 6: _t->OnTimer(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData RemoteUpdate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RemoteUpdate::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_RemoteUpdate,
      qt_meta_data_RemoteUpdate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RemoteUpdate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RemoteUpdate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RemoteUpdate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RemoteUpdate))
        return static_cast<void*>(const_cast< RemoteUpdate*>(this));
    return QDialog::qt_metacast(_clname);
}

int RemoteUpdate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
