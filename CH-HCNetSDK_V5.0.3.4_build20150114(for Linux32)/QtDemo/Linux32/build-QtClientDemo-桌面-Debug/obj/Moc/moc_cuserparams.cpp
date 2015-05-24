/****************************************************************************
** Meta object code from reading C++ file 'cuserparams.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/ParaConfig/configure_params/RemoteParams/UserParams/cuserparams.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cuserparams.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CUserParams[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   13,   12,   12, 0x0a,
      56,   40,   12,   12, 0x0a,
     100,   83,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CUserParams[] = {
    "CUserParams\0\0iUserID\0userIDChanged(int)\0"
    "iLocalRightType\0localRightTypeChanged(int)\0"
    "iRemoteRightType\0remoteRightTypeChanged(int)\0"
};

void CUserParams::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CUserParams *_t = static_cast<CUserParams *>(_o);
        switch (_id) {
        case 0: _t->userIDChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->localRightTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->remoteRightTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CUserParams::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CUserParams::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CUserParams,
      qt_meta_data_CUserParams, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CUserParams::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CUserParams::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CUserParams::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CUserParams))
        return static_cast<void*>(const_cast< CUserParams*>(this));
    return QDialog::qt_metacast(_clname);
}

int CUserParams::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
