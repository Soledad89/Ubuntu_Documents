/****************************************************************************
** Meta object code from reading C++ file 'audiotransfer.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/OtherFunc/AudioTransfer/audiotransfer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'audiotransfer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AudioTransfer[] = {

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
      15,   14,   14,   14, 0x08,
      56,   44,   14,   14, 0x08,
      98,   14,   14,   14, 0x08,
     129,   14,   14,   14, 0x08,
     164,   14,   14,   14, 0x08,
     196,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AudioTransfer[] = {
    "AudioTransfer\0\0on_pushButton_exit_clicked()\0"
    "item,column\0audioTransferDevice(QTreeWidgetItem*,int)\0"
    "on_pushButton_browse_clicked()\0"
    "on_pushButton_talkmrsend_clicked()\0"
    "on_pushButton_startmr_clicked()\0"
    "on_pushButton_stopmr_clicked()\0"
};

void AudioTransfer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AudioTransfer *_t = static_cast<AudioTransfer *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_exit_clicked(); break;
        case 1: _t->audioTransferDevice((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->on_pushButton_browse_clicked(); break;
        case 3: _t->on_pushButton_talkmrsend_clicked(); break;
        case 4: _t->on_pushButton_startmr_clicked(); break;
        case 5: _t->on_pushButton_stopmr_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AudioTransfer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AudioTransfer::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AudioTransfer,
      qt_meta_data_AudioTransfer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AudioTransfer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AudioTransfer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AudioTransfer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AudioTransfer))
        return static_cast<void*>(const_cast< AudioTransfer*>(this));
    return QDialog::qt_metacast(_clname);
}

int AudioTransfer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
