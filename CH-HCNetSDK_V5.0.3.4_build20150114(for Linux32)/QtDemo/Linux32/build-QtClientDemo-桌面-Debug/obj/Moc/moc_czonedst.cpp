/****************************************************************************
** Meta object code from reading C++ file 'czonedst.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/ParaConfig/configure_params/RemoteParams/NetParams/czonedst.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'czonedst.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CZoneDst[] = {

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
      10,    9,    9,    9, 0x0a,
      22,    9,    9,    9, 0x0a,
      37,    9,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CZoneDst[] = {
    "CZoneDst\0\0clickSave()\0clickRefresh()\0"
    "on_btnExit_clicked()\0"
};

void CZoneDst::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CZoneDst *_t = static_cast<CZoneDst *>(_o);
        switch (_id) {
        case 0: _t->clickSave(); break;
        case 1: _t->clickRefresh(); break;
        case 2: _t->on_btnExit_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData CZoneDst::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CZoneDst::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CZoneDst,
      qt_meta_data_CZoneDst, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CZoneDst::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CZoneDst::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CZoneDst::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CZoneDst))
        return static_cast<void*>(const_cast< CZoneDst*>(this));
    return QDialog::qt_metacast(_clname);
}

int CZoneDst::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
