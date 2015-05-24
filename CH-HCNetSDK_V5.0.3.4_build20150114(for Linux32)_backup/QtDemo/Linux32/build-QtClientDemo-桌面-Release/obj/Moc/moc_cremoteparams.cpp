/****************************************************************************
** Meta object code from reading C++ file 'cremoteparams.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/ParaConfig/configure_params/RemoteParams/cremoteparams.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cremoteparams.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CRemoteParams[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x0a,
      31,   14,   14,   14, 0x0a,
      44,   14,   14,   14, 0x0a,
      56,   14,   14,   14, 0x0a,
      75,   14,   14,   14, 0x0a,
      86,   14,   14,   14, 0x0a,
     101,   14,   14,   14, 0x0a,
     113,   14,   14,   14, 0x0a,
     144,  134,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CRemoteParams[] = {
    "CRemoteParams\0\0refreshParams()\0"
    "saveParams()\0clickDHCP()\0clickAdvancedNet()\0"
    "clickNFS()\0clickZoneDst()\0clickRtsp()\0"
    "clickCompressAudio()\0iTabIndex\0"
    "clickTabPage(int)\0"
};

void CRemoteParams::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CRemoteParams *_t = static_cast<CRemoteParams *>(_o);
        switch (_id) {
        case 0: _t->refreshParams(); break;
        case 1: _t->saveParams(); break;
        case 2: _t->clickDHCP(); break;
        case 3: _t->clickAdvancedNet(); break;
        case 4: _t->clickNFS(); break;
        case 5: _t->clickZoneDst(); break;
        case 6: _t->clickRtsp(); break;
        case 7: _t->clickCompressAudio(); break;
        case 8: _t->clickTabPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CRemoteParams::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CRemoteParams::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CRemoteParams,
      qt_meta_data_CRemoteParams, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CRemoteParams::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CRemoteParams::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CRemoteParams::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CRemoteParams))
        return static_cast<void*>(const_cast< CRemoteParams*>(this));
    return QWidget::qt_metacast(_clname);
}

int CRemoteParams::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
