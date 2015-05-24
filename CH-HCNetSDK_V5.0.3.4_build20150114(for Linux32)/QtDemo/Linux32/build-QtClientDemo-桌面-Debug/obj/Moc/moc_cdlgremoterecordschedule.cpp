/****************************************************************************
** Meta object code from reading C++ file 'cdlgremoterecordschedule.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/ParaConfig/configure_params/RemoteParams/ChannelParams/cdlgremoterecordschedule.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cdlgremoterecordschedule.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CDlgRemoteRecordSchedule[] = {

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
      26,   25,   25,   25, 0x0a,
      50,   25,   25,   25, 0x0a,
      84,   75,   71,   25, 0x0a,
     109,   25,   71,   25, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CDlgRemoteRecordSchedule[] = {
    "CDlgRemoteRecordSchedule\0\0"
    "on_btnCopyDay_clicked()\0on_btnSave_clicked()\0"
    "int\0iWeekDay\0comboWeekDayChanged(int)\0"
    "clickRecordAllDay()\0"
};

void CDlgRemoteRecordSchedule::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CDlgRemoteRecordSchedule *_t = static_cast<CDlgRemoteRecordSchedule *>(_o);
        switch (_id) {
        case 0: _t->on_btnCopyDay_clicked(); break;
        case 1: _t->on_btnSave_clicked(); break;
        case 2: { int _r = _t->comboWeekDayChanged((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: { int _r = _t->clickRecordAllDay();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CDlgRemoteRecordSchedule::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CDlgRemoteRecordSchedule::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CDlgRemoteRecordSchedule,
      qt_meta_data_CDlgRemoteRecordSchedule, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CDlgRemoteRecordSchedule::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CDlgRemoteRecordSchedule::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CDlgRemoteRecordSchedule::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CDlgRemoteRecordSchedule))
        return static_cast<void*>(const_cast< CDlgRemoteRecordSchedule*>(this));
    return QDialog::qt_metacast(_clname);
}

int CDlgRemoteRecordSchedule::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
