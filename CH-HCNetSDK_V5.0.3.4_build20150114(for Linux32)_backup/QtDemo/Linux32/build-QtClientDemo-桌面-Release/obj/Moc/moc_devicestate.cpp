/****************************************************************************
** Meta object code from reading C++ file 'devicestate.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/ManageDevice/DeviceState/devicestate.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'devicestate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DeviceState[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x08,
      45,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DeviceState[] = {
    "DeviceState\0\0on_pushButton_refresh_clicked()\0"
    "on_pushButton_exit_clicked()\0"
};

void DeviceState::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DeviceState *_t = static_cast<DeviceState *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_refresh_clicked(); break;
        case 1: _t->on_pushButton_exit_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData DeviceState::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DeviceState::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DeviceState,
      qt_meta_data_DeviceState, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DeviceState::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DeviceState::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DeviceState::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DeviceState))
        return static_cast<void*>(const_cast< DeviceState*>(this));
    return QDialog::qt_metacast(_clname);
}

int DeviceState::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
