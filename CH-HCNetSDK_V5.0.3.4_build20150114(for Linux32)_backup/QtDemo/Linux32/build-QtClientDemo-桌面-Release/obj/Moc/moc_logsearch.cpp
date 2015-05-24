/****************************************************************************
** Meta object code from reading C++ file 'logsearch.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/ManageDevice/LogSearch/logsearch.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'logsearch.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LogSearch[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   11,   10,   10, 0x08,
      62,   11,   10,   10, 0x08,
     108,   11,   10,   10, 0x08,
     162,  153,   10,   10, 0x08,
     211,  153,   10,   10, 0x08,
     259,   10,   10,   10, 0x08,
     293,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_LogSearch[] = {
    "LogSearch\0\0index\0"
    "on_comboBox_logtype_currentIndexChanged(int)\0"
    "on_comboBox_maintype_currentIndexChanged(int)\0"
    "on_comboBox_subtype_currentIndexChanged(int)\0"
    "datetime\0on_dateTimeEdit_start_dateTimeChanged(QDateTime)\0"
    "on_dateTimeEdit_stop_dateTimeChanged(QDateTime)\0"
    "on_pushButton_searchlog_clicked()\0"
    "on_pushButton_exit_clicked()\0"
};

void LogSearch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LogSearch *_t = static_cast<LogSearch *>(_o);
        switch (_id) {
        case 0: _t->on_comboBox_logtype_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_comboBox_maintype_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_comboBox_subtype_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_dateTimeEdit_start_dateTimeChanged((*reinterpret_cast< const QDateTime(*)>(_a[1]))); break;
        case 4: _t->on_dateTimeEdit_stop_dateTimeChanged((*reinterpret_cast< const QDateTime(*)>(_a[1]))); break;
        case 5: _t->on_pushButton_searchlog_clicked(); break;
        case 6: _t->on_pushButton_exit_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LogSearch::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LogSearch::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_LogSearch,
      qt_meta_data_LogSearch, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LogSearch::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LogSearch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LogSearch::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LogSearch))
        return static_cast<void*>(const_cast< LogSearch*>(this));
    return QDialog::qt_metacast(_clname);
}

int LogSearch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
