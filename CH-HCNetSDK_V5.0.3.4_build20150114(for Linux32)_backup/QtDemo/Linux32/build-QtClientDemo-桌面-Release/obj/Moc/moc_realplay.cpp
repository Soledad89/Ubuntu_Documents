/****************************************************************************
** Meta object code from reading C++ file 'realplay.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/RealPlay/realplay.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'realplay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RealPlay[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      38,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      26,   10,    9,    9, 0x08,
      50,    9,    9,    9, 0x08,
      80,   76,    9,    9, 0x08,
     112,    9,    9,    9, 0x08,
     135,    9,    9,    9, 0x08,
     159,    9,    9,    9, 0x08,
     190,  184,    9,    9, 0x08,
     238,  184,    9,    9, 0x08,
     289,  184,    9,    9, 0x08,
     335,  184,    9,    9, 0x08,
     387,  184,    9,    9, 0x08,
     438,    9,    9,    9, 0x08,
     471,    9,    9,    9, 0x08,
     504,    9,    9,    9, 0x08,
     538,    9,    9,    9, 0x08,
     574,    9,    9,    9, 0x08,
     601,    9,    9,    9, 0x08,
     630,    9,    9,    9, 0x08,
     659,    9,    9,    9, 0x08,
     689,    9,    9,    9, 0x08,
     725,    9,    9,    9, 0x08,
     761,    9,    9,    9, 0x08,
     795,    9,    9,    9, 0x08,
     828,    9,    9,    9, 0x08,
     866,    9,    9,    9, 0x08,
     904,    9,    9,    9, 0x08,
     947,    9,    9,    9, 0x08,
     989,    9,    9,    9, 0x08,
    1031,    9,    9,    9, 0x08,
    1072,    9,    9,    9, 0x08,
    1113,    9,    9,    9, 0x08,
    1153,    9,    9,    9, 0x08,
    1198, 1192,    9,    9, 0x08,
    1243, 1192,    9,    9, 0x08,
    1290, 1192,    9,    9, 0x08,
    1339, 1192,    9,    9, 0x08,
    1381, 1192,    9,    9, 0x08,
    1426,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_RealPlay[] = {
    "RealPlay\0\0iWindowNumIndex\0"
    "comboWinNumChanged(int)\0"
    "OnSingleClickPlayWindow()\0pos\0"
    "RealPlayContextResponse(QPoint)\0"
    "RealPlayFullFrameRep()\0RealPlayFullScreenRep()\0"
    "RealPlayNormalFrameRep()\0index\0"
    "on_comboBox_windowsnum_currentIndexChanged(int)\0"
    "on_comboBox_qualitydemand_currentIndexChanged(int)\0"
    "on_comboBox_ptzspeed_currentIndexChanged(int)\0"
    "on_comboBox_ptzcruisepoint_currentIndexChanged(int)\0"
    "on_comboBox_ptzcruisepath_currentIndexChanged(int)\0"
    "on_pushButton_realplay_clicked()\0"
    "on_pushButton_savefile_clicked()\0"
    "on_pushButton_scrashPic_clicked()\0"
    "on_pushButton_forceIframe_clicked()\0"
    "on_pushButton_up_clicked()\0"
    "on_pushButton_down_clicked()\0"
    "on_pushButton_left_clicked()\0"
    "on_pushButton_right_clicked()\0"
    "on_pushButton_narrowfocus_clicked()\0"
    "on_pushButton_expandfocus_clicked()\0"
    "on_pushButton_nearfocus_clicked()\0"
    "on_pushButton_farfocus_clicked()\0"
    "on_pushButton_largeaperture_clicked()\0"
    "on_pushButton_smallaperture_clicked()\0"
    "on_pushButton_ptzcruisepointcall_clicked()\0"
    "on_pushButton_ptzcruisepointset_clicked()\0"
    "on_pushButton_ptzcruisepathcall_clicked()\0"
    "on_pushButton_ptzcruisepathset_clicked()\0"
    "on_pushButton_trackmemorystart_clicked()\0"
    "on_pushButton_trackmemorystop_clicked()\0"
    "on_pushButton_trackmemoryrun_clicked()\0"
    "value\0on_horizontalSlider_bright_valueChanged(int)\0"
    "on_horizontalSlider_contrast_valueChanged(int)\0"
    "on_horizontalSlider_saturation_valueChanged(int)\0"
    "on_horizontalSlider_hue_valueChanged(int)\0"
    "on_horizontalSlider_volume_valueChanged(int)\0"
    "on_pushButton_defaultparameter_clicked()\0"
};

void RealPlay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RealPlay *_t = static_cast<RealPlay *>(_o);
        switch (_id) {
        case 0: _t->comboWinNumChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->OnSingleClickPlayWindow(); break;
        case 2: _t->RealPlayContextResponse((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 3: _t->RealPlayFullFrameRep(); break;
        case 4: _t->RealPlayFullScreenRep(); break;
        case 5: _t->RealPlayNormalFrameRep(); break;
        case 6: _t->on_comboBox_windowsnum_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_comboBox_qualitydemand_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_comboBox_ptzspeed_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_comboBox_ptzcruisepoint_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_comboBox_ptzcruisepath_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_pushButton_realplay_clicked(); break;
        case 12: _t->on_pushButton_savefile_clicked(); break;
        case 13: _t->on_pushButton_scrashPic_clicked(); break;
        case 14: _t->on_pushButton_forceIframe_clicked(); break;
        case 15: _t->on_pushButton_up_clicked(); break;
        case 16: _t->on_pushButton_down_clicked(); break;
        case 17: _t->on_pushButton_left_clicked(); break;
        case 18: _t->on_pushButton_right_clicked(); break;
        case 19: _t->on_pushButton_narrowfocus_clicked(); break;
        case 20: _t->on_pushButton_expandfocus_clicked(); break;
        case 21: _t->on_pushButton_nearfocus_clicked(); break;
        case 22: _t->on_pushButton_farfocus_clicked(); break;
        case 23: _t->on_pushButton_largeaperture_clicked(); break;
        case 24: _t->on_pushButton_smallaperture_clicked(); break;
        case 25: _t->on_pushButton_ptzcruisepointcall_clicked(); break;
        case 26: _t->on_pushButton_ptzcruisepointset_clicked(); break;
        case 27: _t->on_pushButton_ptzcruisepathcall_clicked(); break;
        case 28: _t->on_pushButton_ptzcruisepathset_clicked(); break;
        case 29: _t->on_pushButton_trackmemorystart_clicked(); break;
        case 30: _t->on_pushButton_trackmemorystop_clicked(); break;
        case 31: _t->on_pushButton_trackmemoryrun_clicked(); break;
        case 32: _t->on_horizontalSlider_bright_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 33: _t->on_horizontalSlider_contrast_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 34: _t->on_horizontalSlider_saturation_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 35: _t->on_horizontalSlider_hue_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 36: _t->on_horizontalSlider_volume_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 37: _t->on_pushButton_defaultparameter_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData RealPlay::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RealPlay::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_RealPlay,
      qt_meta_data_RealPlay, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RealPlay::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RealPlay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RealPlay::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RealPlay))
        return static_cast<void*>(const_cast< RealPlay*>(this));
    return QWidget::qt_metacast(_clname);
}

int RealPlay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 38)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 38;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
