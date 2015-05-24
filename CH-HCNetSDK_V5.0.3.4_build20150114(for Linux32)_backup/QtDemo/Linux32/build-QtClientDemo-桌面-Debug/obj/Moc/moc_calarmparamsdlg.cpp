/****************************************************************************
** Meta object code from reading C++ file 'calarmparamsdlg.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/ParaConfig/configure_params/RemoteParams/AlarmParams/calarmparamsdlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calarmparamsdlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CAlarmParamsDlg[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   17,   16,   16, 0x0a,
      47,   16,   16,   16, 0x0a,
      82,   16,   16,   16, 0x0a,
     119,   16,   16,   16, 0x0a,
     146,   16,   16,   16, 0x0a,
     181,   16,   16,   16, 0x0a,
     217,   17,   16,   16, 0x0a,
     242,   17,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CAlarmParamsDlg[] = {
    "CAlarmParamsDlg\0\0index\0changeAlarmInIndex(int)\0"
    "on_checkBoxAlarmInHandle_clicked()\0"
    "on_pushButtonAlarmInHandle_clicked()\0"
    "on_pushButtonPTZ_clicked()\0"
    "on_pushButtonAlarmInSave_clicked()\0"
    "on_pushButtonAlarmOutSave_clicked()\0"
    "changeAlarmOutIndex(int)\0"
    "changeAlarmOutDateIndex(int)\0"
};

void CAlarmParamsDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CAlarmParamsDlg *_t = static_cast<CAlarmParamsDlg *>(_o);
        switch (_id) {
        case 0: _t->changeAlarmInIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_checkBoxAlarmInHandle_clicked(); break;
        case 2: _t->on_pushButtonAlarmInHandle_clicked(); break;
        case 3: _t->on_pushButtonPTZ_clicked(); break;
        case 4: _t->on_pushButtonAlarmInSave_clicked(); break;
        case 5: _t->on_pushButtonAlarmOutSave_clicked(); break;
        case 6: _t->changeAlarmOutIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->changeAlarmOutDateIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CAlarmParamsDlg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CAlarmParamsDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CAlarmParamsDlg,
      qt_meta_data_CAlarmParamsDlg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CAlarmParamsDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CAlarmParamsDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CAlarmParamsDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CAlarmParamsDlg))
        return static_cast<void*>(const_cast< CAlarmParamsDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int CAlarmParamsDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
