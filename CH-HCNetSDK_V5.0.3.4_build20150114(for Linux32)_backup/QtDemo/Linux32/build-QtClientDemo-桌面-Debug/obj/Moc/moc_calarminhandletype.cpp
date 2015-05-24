/****************************************************************************
** Meta object code from reading C++ file 'calarminhandletype.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/ParaConfig/configure_params/RemoteParams/AlarmParams/calarminhandletype.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calarminhandletype.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CAlarmInHandleType[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      26,   20,   19,   19, 0x0a,
      58,   49,   19,   19, 0x0a,
      83,   19,   19,   19, 0x0a,
     106,   19,   19,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CAlarmInHandleType[] = {
    "CAlarmInHandleType\0\0event\0"
    "showEvent(QShowEvent*)\0iWeekDay\0"
    "comboWeekDayChanged(int)\0"
    "on_checkbo08_clicked()\0on_btnSave_clicked()\0"
};

void CAlarmInHandleType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CAlarmInHandleType *_t = static_cast<CAlarmInHandleType *>(_o);
        switch (_id) {
        case 0: _t->showEvent((*reinterpret_cast< QShowEvent*(*)>(_a[1]))); break;
        case 1: _t->comboWeekDayChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_checkbo08_clicked(); break;
        case 3: _t->on_btnSave_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CAlarmInHandleType::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CAlarmInHandleType::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CAlarmInHandleType,
      qt_meta_data_CAlarmInHandleType, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CAlarmInHandleType::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CAlarmInHandleType::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CAlarmInHandleType::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CAlarmInHandleType))
        return static_cast<void*>(const_cast< CAlarmInHandleType*>(this));
    return QDialog::qt_metacast(_clname);
}

int CAlarmInHandleType::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
