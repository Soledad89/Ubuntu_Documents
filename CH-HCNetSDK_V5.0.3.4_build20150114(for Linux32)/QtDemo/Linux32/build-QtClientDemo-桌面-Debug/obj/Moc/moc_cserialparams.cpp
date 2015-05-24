/****************************************************************************
** Meta object code from reading C++ file 'cserialparams.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/ParaConfig/configure_params/RemoteParams/SerialParams/cserialparams.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cserialparams.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CSerialParams[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x0a,
      37,   31,   14,   14, 0x0a,
      58,   31,   14,   14, 0x0a,
      82,   14,   14,   14, 0x0a,
      95,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CSerialParams[] = {
    "CSerialParams\0\0refreshparams()\0index\0"
    "changeChanIndex(int)\0change232WorkState(int)\0"
    "saveparams()\0PppSetup()\0"
};

void CSerialParams::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CSerialParams *_t = static_cast<CSerialParams *>(_o);
        switch (_id) {
        case 0: _t->refreshparams(); break;
        case 1: _t->changeChanIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->change232WorkState((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->saveparams(); break;
        case 4: _t->PppSetup(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CSerialParams::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CSerialParams::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CSerialParams,
      qt_meta_data_CSerialParams, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CSerialParams::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CSerialParams::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CSerialParams::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CSerialParams))
        return static_cast<void*>(const_cast< CSerialParams*>(this));
    return QWidget::qt_metacast(_clname);
}

int CSerialParams::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
