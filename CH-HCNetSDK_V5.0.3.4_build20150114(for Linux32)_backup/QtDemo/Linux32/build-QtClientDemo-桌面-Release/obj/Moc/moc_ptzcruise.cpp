/****************************************************************************
** Meta object code from reading C++ file 'ptzcruise.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/RealPlay/PTZ/PtzCruise/ptzcruise.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ptzcruise.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PtzCruise[] = {

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
      11,   10,   10,   10, 0x08,
      50,   10,   10,   10, 0x08,
      92,   10,   10,   10, 0x08,
     127,  121,   10,   10, 0x08,
     178,  121,   10,   10, 0x08,
     230,  121,   10,   10, 0x08,
     288,  121,   10,   10, 0x08,
     339,  121,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PtzCruise[] = {
    "PtzCruise\0\0on_pushButton_addcruisepoint_clicked()\0"
    "on_pushButton_deletecruisepoint_clicked()\0"
    "on_pushButton_exit_clicked()\0index\0"
    "on_comboBox_ptzcruisepath_currentIndexChanged(int)\0"
    "on_comboBox_ptzcruisepoint_currentIndexChanged(int)\0"
    "on_comboBox_ptzcruisepresetpoint_currentIndexChanged(int)\0"
    "on_comboBox_ptzcruisetime_currentIndexChanged(int)\0"
    "on_comboBox_ptzcruisespeed_currentIndexChanged(int)\0"
};

void PtzCruise::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PtzCruise *_t = static_cast<PtzCruise *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_addcruisepoint_clicked(); break;
        case 1: _t->on_pushButton_deletecruisepoint_clicked(); break;
        case 2: _t->on_pushButton_exit_clicked(); break;
        case 3: _t->on_comboBox_ptzcruisepath_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_comboBox_ptzcruisepoint_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_comboBox_ptzcruisepresetpoint_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_comboBox_ptzcruisetime_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_comboBox_ptzcruisespeed_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PtzCruise::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PtzCruise::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PtzCruise,
      qt_meta_data_PtzCruise, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PtzCruise::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PtzCruise::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PtzCruise::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PtzCruise))
        return static_cast<void*>(const_cast< PtzCruise*>(this));
    return QDialog::qt_metacast(_clname);
}

int PtzCruise::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
