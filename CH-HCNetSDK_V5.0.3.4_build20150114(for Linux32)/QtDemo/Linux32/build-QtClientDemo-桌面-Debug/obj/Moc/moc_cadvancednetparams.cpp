/****************************************************************************
** Meta object code from reading C++ file 'cadvancednetparams.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/ParaConfig/configure_params/RemoteParams/NetParams/cadvancednetparams.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cadvancednetparams.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CAdvancedNetParams[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x0a,
      33,   19,   19,   19, 0x0a,
      44,   19,   19,   19, 0x0a,
      56,   19,   19,   19, 0x0a,
      69,   19,   19,   19, 0x0a,
      85,   19,   19,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CAdvancedNetParams[] = {
    "CAdvancedNetParams\0\0clickPPPoE()\0"
    "clickNTP()\0clickDDNS()\0saveParams()\0"
    "refreshParams()\0on_btnExit_clicked()\0"
};

void CAdvancedNetParams::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CAdvancedNetParams *_t = static_cast<CAdvancedNetParams *>(_o);
        switch (_id) {
        case 0: _t->clickPPPoE(); break;
        case 1: _t->clickNTP(); break;
        case 2: _t->clickDDNS(); break;
        case 3: _t->saveParams(); break;
        case 4: _t->refreshParams(); break;
        case 5: _t->on_btnExit_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData CAdvancedNetParams::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CAdvancedNetParams::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CAdvancedNetParams,
      qt_meta_data_CAdvancedNetParams, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CAdvancedNetParams::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CAdvancedNetParams::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CAdvancedNetParams::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CAdvancedNetParams))
        return static_cast<void*>(const_cast< CAdvancedNetParams*>(this));
    return QDialog::qt_metacast(_clname);
}

int CAdvancedNetParams::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
