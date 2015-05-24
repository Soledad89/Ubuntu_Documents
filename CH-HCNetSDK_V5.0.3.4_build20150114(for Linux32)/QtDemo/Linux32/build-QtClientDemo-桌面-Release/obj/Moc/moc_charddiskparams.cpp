/****************************************************************************
** Meta object code from reading C++ file 'charddiskparams.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/ParaConfig/configure_params/HardDiskParams/charddiskparams.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'charddiskparams.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CHardDiskParams[] = {

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
      17,   16,   16,   16, 0x0a,
      42,   16,   16,   16, 0x0a,
      65,   16,   16,   16, 0x0a,
      95,   16,   16,   16, 0x0a,
     137,  123,   16,   16, 0x0a,
     162,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CHardDiskParams[] = {
    "CHardDiskParams\0\0on_btnHDUpdate_clicked()\0"
    "on_btnHDSave_clicked()\0"
    "on_btnHDGroupUpdate_clicked()\0"
    "on_btnHDGroupSave_clicked()\0iHDGroupIndex\0"
    "comboHDGroupChanged(int)\0"
    "on_checkAllChan_clicked()\0"
};

void CHardDiskParams::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CHardDiskParams *_t = static_cast<CHardDiskParams *>(_o);
        switch (_id) {
        case 0: _t->on_btnHDUpdate_clicked(); break;
        case 1: _t->on_btnHDSave_clicked(); break;
        case 2: _t->on_btnHDGroupUpdate_clicked(); break;
        case 3: _t->on_btnHDGroupSave_clicked(); break;
        case 4: _t->comboHDGroupChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_checkAllChan_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CHardDiskParams::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CHardDiskParams::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CHardDiskParams,
      qt_meta_data_CHardDiskParams, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CHardDiskParams::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CHardDiskParams::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CHardDiskParams::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CHardDiskParams))
        return static_cast<void*>(const_cast< CHardDiskParams*>(this));
    return QWidget::qt_metacast(_clname);
}

int CHardDiskParams::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
