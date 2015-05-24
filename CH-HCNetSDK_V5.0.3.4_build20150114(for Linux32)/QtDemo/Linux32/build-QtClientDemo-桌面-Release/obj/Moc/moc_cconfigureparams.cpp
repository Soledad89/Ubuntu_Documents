/****************************************************************************
** Meta object code from reading C++ file 'cconfigureparams.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/ParaConfig/configure_params/cconfigureparams.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cconfigureparams.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CConfigureParams[] = {

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
      18,   17,   17,   17, 0x0a,
      37,   17,   17,   17, 0x0a,
      62,   17,   17,   17, 0x0a,
      93,   17,   17,   17, 0x0a,
     116,  108,   17,   17, 0x0a,
     135,   17,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CConfigureParams[] = {
    "CConfigureParams\0\0loadRemoteParams()\0"
    "on_btnIPParams_clicked()\0"
    "on_btnHardDiskParams_clicked()\0"
    "GetDVRUserID()\0lUserID\0SetDVRUserID(long)\0"
    "showLoginBtn()\0"
};

void CConfigureParams::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CConfigureParams *_t = static_cast<CConfigureParams *>(_o);
        switch (_id) {
        case 0: _t->loadRemoteParams(); break;
        case 1: _t->on_btnIPParams_clicked(); break;
        case 2: _t->on_btnHardDiskParams_clicked(); break;
        case 3: _t->GetDVRUserID(); break;
        case 4: _t->SetDVRUserID((*reinterpret_cast< long(*)>(_a[1]))); break;
        case 5: _t->showLoginBtn(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CConfigureParams::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CConfigureParams::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CConfigureParams,
      qt_meta_data_CConfigureParams, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CConfigureParams::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CConfigureParams::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CConfigureParams::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CConfigureParams))
        return static_cast<void*>(const_cast< CConfigureParams*>(this));
    return QWidget::qt_metacast(_clname);
}

int CConfigureParams::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
