/****************************************************************************
** Meta object code from reading C++ file 'cwarningdialog.h'
**
** Created: Thu Jun 16 15:27:51 2016
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "cwarningdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cwarningdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CWarningDialog[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CWarningDialog[] = {
    "CWarningDialog\0\0on_pushButton_clicked()\0"
};

const QMetaObject CWarningDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CWarningDialog,
      qt_meta_data_CWarningDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CWarningDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CWarningDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CWarningDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CWarningDialog))
        return static_cast<void*>(const_cast< CWarningDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int CWarningDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pushButton_clicked(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
