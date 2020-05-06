/****************************************************************************
** Meta object code from reading C++ file 'device.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "device.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'device.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KWin__LibInput__Device_t {
    QByteArrayData data[88];
    char stringdata0[1821];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KWin__LibInput__Device_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KWin__LibInput__Device_t qt_meta_stringdata_KWin__LibInput__Device = {
    {
QT_MOC_LITERAL(0, 0, 22), // "KWin::LibInput::Device"
QT_MOC_LITERAL(1, 23, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 39, 24), // "org.kde.KWin.InputDevice"
QT_MOC_LITERAL(3, 64, 19), // "tapButtonMapChanged"
QT_MOC_LITERAL(4, 84, 0), // ""
QT_MOC_LITERAL(5, 85, 17), // "leftHandedChanged"
QT_MOC_LITERAL(6, 103, 25), // "disableWhileTypingChanged"
QT_MOC_LITERAL(7, 129, 26), // "pointerAccelerationChanged"
QT_MOC_LITERAL(8, 156, 33), // "pointerAccelerationProfileCha..."
QT_MOC_LITERAL(9, 190, 14), // "enabledChanged"
QT_MOC_LITERAL(10, 205, 17), // "tapToClickChanged"
QT_MOC_LITERAL(11, 223, 17), // "tapAndDragChanged"
QT_MOC_LITERAL(12, 241, 18), // "tapDragLockChanged"
QT_MOC_LITERAL(13, 260, 22), // "middleEmulationChanged"
QT_MOC_LITERAL(14, 283, 20), // "naturalScrollChanged"
QT_MOC_LITERAL(15, 304, 19), // "scrollMethodChanged"
QT_MOC_LITERAL(16, 324, 19), // "scrollButtonChanged"
QT_MOC_LITERAL(17, 344, 18), // "clickMethodChanged"
QT_MOC_LITERAL(18, 363, 8), // "keyboard"
QT_MOC_LITERAL(19, 372, 20), // "alphaNumericKeyboard"
QT_MOC_LITERAL(20, 393, 7), // "pointer"
QT_MOC_LITERAL(21, 401, 8), // "touchpad"
QT_MOC_LITERAL(22, 410, 5), // "touch"
QT_MOC_LITERAL(23, 416, 10), // "tabletTool"
QT_MOC_LITERAL(24, 427, 9), // "tabletPad"
QT_MOC_LITERAL(25, 437, 14), // "gestureSupport"
QT_MOC_LITERAL(26, 452, 4), // "name"
QT_MOC_LITERAL(27, 457, 7), // "sysName"
QT_MOC_LITERAL(28, 465, 10), // "outputName"
QT_MOC_LITERAL(29, 476, 4), // "size"
QT_MOC_LITERAL(30, 481, 7), // "product"
QT_MOC_LITERAL(31, 489, 6), // "vendor"
QT_MOC_LITERAL(32, 496, 21), // "supportsDisableEvents"
QT_MOC_LITERAL(33, 518, 7), // "enabled"
QT_MOC_LITERAL(34, 526, 16), // "supportedButtons"
QT_MOC_LITERAL(35, 543, 25), // "supportsCalibrationMatrix"
QT_MOC_LITERAL(36, 569, 18), // "supportsLeftHanded"
QT_MOC_LITERAL(37, 588, 26), // "leftHandedEnabledByDefault"
QT_MOC_LITERAL(38, 615, 10), // "leftHanded"
QT_MOC_LITERAL(39, 626, 36), // "supportsDisableEventsOnExtern..."
QT_MOC_LITERAL(40, 663, 26), // "supportsDisableWhileTyping"
QT_MOC_LITERAL(41, 690, 34), // "disableWhileTypingEnabledByDe..."
QT_MOC_LITERAL(42, 725, 18), // "disableWhileTyping"
QT_MOC_LITERAL(43, 744, 27), // "supportsPointerAcceleration"
QT_MOC_LITERAL(44, 772, 26), // "defaultPointerAcceleration"
QT_MOC_LITERAL(45, 799, 19), // "pointerAcceleration"
QT_MOC_LITERAL(46, 819, 38), // "supportsPointerAccelerationPr..."
QT_MOC_LITERAL(47, 858, 37), // "defaultPointerAccelerationPro..."
QT_MOC_LITERAL(48, 896, 30), // "pointerAccelerationProfileFlat"
QT_MOC_LITERAL(49, 927, 42), // "supportsPointerAccelerationPr..."
QT_MOC_LITERAL(50, 970, 41), // "defaultPointerAccelerationPro..."
QT_MOC_LITERAL(51, 1012, 34), // "pointerAccelerationProfileAda..."
QT_MOC_LITERAL(52, 1047, 14), // "tapFingerCount"
QT_MOC_LITERAL(53, 1062, 26), // "tapToClickEnabledByDefault"
QT_MOC_LITERAL(54, 1089, 10), // "tapToClick"
QT_MOC_LITERAL(55, 1100, 23), // "supportsLmrTapButtonMap"
QT_MOC_LITERAL(56, 1124, 31), // "lmrTapButtonMapEnabledByDefault"
QT_MOC_LITERAL(57, 1156, 15), // "lmrTapButtonMap"
QT_MOC_LITERAL(58, 1172, 26), // "tapAndDragEnabledByDefault"
QT_MOC_LITERAL(59, 1199, 10), // "tapAndDrag"
QT_MOC_LITERAL(60, 1210, 27), // "tapDragLockEnabledByDefault"
QT_MOC_LITERAL(61, 1238, 11), // "tapDragLock"
QT_MOC_LITERAL(62, 1250, 23), // "supportsMiddleEmulation"
QT_MOC_LITERAL(63, 1274, 31), // "middleEmulationEnabledByDefault"
QT_MOC_LITERAL(64, 1306, 15), // "middleEmulation"
QT_MOC_LITERAL(65, 1322, 21), // "supportsNaturalScroll"
QT_MOC_LITERAL(66, 1344, 29), // "naturalScrollEnabledByDefault"
QT_MOC_LITERAL(67, 1374, 13), // "naturalScroll"
QT_MOC_LITERAL(68, 1388, 23), // "supportsScrollTwoFinger"
QT_MOC_LITERAL(69, 1412, 31), // "scrollTwoFingerEnabledByDefault"
QT_MOC_LITERAL(70, 1444, 15), // "scrollTwoFinger"
QT_MOC_LITERAL(71, 1460, 18), // "supportsScrollEdge"
QT_MOC_LITERAL(72, 1479, 26), // "scrollEdgeEnabledByDefault"
QT_MOC_LITERAL(73, 1506, 10), // "scrollEdge"
QT_MOC_LITERAL(74, 1517, 26), // "supportsScrollOnButtonDown"
QT_MOC_LITERAL(75, 1544, 34), // "scrollOnButtonDownEnabledByDe..."
QT_MOC_LITERAL(76, 1579, 19), // "defaultScrollButton"
QT_MOC_LITERAL(77, 1599, 18), // "scrollOnButtonDown"
QT_MOC_LITERAL(78, 1618, 12), // "scrollButton"
QT_MOC_LITERAL(79, 1631, 12), // "switchDevice"
QT_MOC_LITERAL(80, 1644, 9), // "lidSwitch"
QT_MOC_LITERAL(81, 1654, 16), // "tabletModeSwitch"
QT_MOC_LITERAL(82, 1671, 24), // "supportsClickMethodAreas"
QT_MOC_LITERAL(83, 1696, 23), // "defaultClickMethodAreas"
QT_MOC_LITERAL(84, 1720, 16), // "clickMethodAreas"
QT_MOC_LITERAL(85, 1737, 30), // "supportsClickMethodClickfinger"
QT_MOC_LITERAL(86, 1768, 29), // "defaultClickMethodClickfinger"
QT_MOC_LITERAL(87, 1798, 22) // "clickMethodClickfinger"

    },
    "KWin::LibInput::Device\0D-Bus Interface\0"
    "org.kde.KWin.InputDevice\0tapButtonMapChanged\0"
    "\0leftHandedChanged\0disableWhileTypingChanged\0"
    "pointerAccelerationChanged\0"
    "pointerAccelerationProfileChanged\0"
    "enabledChanged\0tapToClickChanged\0"
    "tapAndDragChanged\0tapDragLockChanged\0"
    "middleEmulationChanged\0naturalScrollChanged\0"
    "scrollMethodChanged\0scrollButtonChanged\0"
    "clickMethodChanged\0keyboard\0"
    "alphaNumericKeyboard\0pointer\0touchpad\0"
    "touch\0tabletTool\0tabletPad\0gestureSupport\0"
    "name\0sysName\0outputName\0size\0product\0"
    "vendor\0supportsDisableEvents\0enabled\0"
    "supportedButtons\0supportsCalibrationMatrix\0"
    "supportsLeftHanded\0leftHandedEnabledByDefault\0"
    "leftHanded\0supportsDisableEventsOnExternalMouse\0"
    "supportsDisableWhileTyping\0"
    "disableWhileTypingEnabledByDefault\0"
    "disableWhileTyping\0supportsPointerAcceleration\0"
    "defaultPointerAcceleration\0"
    "pointerAcceleration\0"
    "supportsPointerAccelerationProfileFlat\0"
    "defaultPointerAccelerationProfileFlat\0"
    "pointerAccelerationProfileFlat\0"
    "supportsPointerAccelerationProfileAdaptive\0"
    "defaultPointerAccelerationProfileAdaptive\0"
    "pointerAccelerationProfileAdaptive\0"
    "tapFingerCount\0tapToClickEnabledByDefault\0"
    "tapToClick\0supportsLmrTapButtonMap\0"
    "lmrTapButtonMapEnabledByDefault\0"
    "lmrTapButtonMap\0tapAndDragEnabledByDefault\0"
    "tapAndDrag\0tapDragLockEnabledByDefault\0"
    "tapDragLock\0supportsMiddleEmulation\0"
    "middleEmulationEnabledByDefault\0"
    "middleEmulation\0supportsNaturalScroll\0"
    "naturalScrollEnabledByDefault\0"
    "naturalScroll\0supportsScrollTwoFinger\0"
    "scrollTwoFingerEnabledByDefault\0"
    "scrollTwoFinger\0supportsScrollEdge\0"
    "scrollEdgeEnabledByDefault\0scrollEdge\0"
    "supportsScrollOnButtonDown\0"
    "scrollOnButtonDownEnabledByDefault\0"
    "defaultScrollButton\0scrollOnButtonDown\0"
    "scrollButton\0switchDevice\0lidSwitch\0"
    "tabletModeSwitch\0supportsClickMethodAreas\0"
    "defaultClickMethodAreas\0clickMethodAreas\0"
    "supportsClickMethodClickfinger\0"
    "defaultClickMethodClickfinger\0"
    "clickMethodClickfinger"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KWin__LibInput__Device[] = {

 // content:
       7,       // revision
       0,       // classname
       1,   14, // classinfo
      14,   16, // methods
      70,  100, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    0,   86,    4, 0x06 /* Public */,
       5,    0,   87,    4, 0x06 /* Public */,
       6,    0,   88,    4, 0x06 /* Public */,
       7,    0,   89,    4, 0x06 /* Public */,
       8,    0,   90,    4, 0x06 /* Public */,
       9,    0,   91,    4, 0x06 /* Public */,
      10,    0,   92,    4, 0x06 /* Public */,
      11,    0,   93,    4, 0x06 /* Public */,
      12,    0,   94,    4, 0x06 /* Public */,
      13,    0,   95,    4, 0x06 /* Public */,
      14,    0,   96,    4, 0x06 /* Public */,
      15,    0,   97,    4, 0x06 /* Public */,
      16,    0,   98,    4, 0x06 /* Public */,
      17,    0,   99,    4, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      18, QMetaType::Bool, 0x00095401,
      19, QMetaType::Bool, 0x00095401,
      20, QMetaType::Bool, 0x00095401,
      21, QMetaType::Bool, 0x00095401,
      22, QMetaType::Bool, 0x00095401,
      23, QMetaType::Bool, 0x00095401,
      24, QMetaType::Bool, 0x00095401,
      25, QMetaType::Bool, 0x00095401,
      26, QMetaType::QString, 0x00095401,
      27, QMetaType::QString, 0x00095401,
      28, QMetaType::QString, 0x00095401,
      29, QMetaType::QSizeF, 0x00095401,
      30, QMetaType::UInt, 0x00095401,
      31, QMetaType::UInt, 0x00095401,
      32, QMetaType::Bool, 0x00095401,
      33, QMetaType::Bool, 0x00495103,
      34, QMetaType::Int, 0x00095401,
      35, QMetaType::Bool, 0x00095401,
      36, QMetaType::Bool, 0x00095401,
      37, QMetaType::Bool, 0x00095401,
      38, QMetaType::Bool, 0x00495103,
      39, QMetaType::Bool, 0x00095401,
      40, QMetaType::Bool, 0x00095401,
      41, QMetaType::Bool, 0x00095401,
      42, QMetaType::Bool, 0x00495103,
      43, QMetaType::Bool, 0x00095401,
      44, QMetaType::QReal, 0x00095401,
      45, QMetaType::QReal, 0x00495103,
      46, QMetaType::Bool, 0x00095401,
      47, QMetaType::Bool, 0x00095401,
      48, QMetaType::Bool, 0x00495103,
      49, QMetaType::Bool, 0x00095401,
      50, QMetaType::Bool, 0x00095401,
      51, QMetaType::Bool, 0x00495103,
      52, QMetaType::Int, 0x00095401,
      53, QMetaType::Bool, 0x00095401,
      54, QMetaType::Bool, 0x00495103,
      55, QMetaType::Bool, 0x00095401,
      56, QMetaType::Bool, 0x00095401,
      57, QMetaType::Bool, 0x00495103,
      58, QMetaType::Bool, 0x00095401,
      59, QMetaType::Bool, 0x00495103,
      60, QMetaType::Bool, 0x00095401,
      61, QMetaType::Bool, 0x00495103,
      62, QMetaType::Bool, 0x00095401,
      63, QMetaType::Bool, 0x00095401,
      64, QMetaType::Bool, 0x00495103,
      65, QMetaType::Bool, 0x00095401,
      66, QMetaType::Bool, 0x00095401,
      67, QMetaType::Bool, 0x00495103,
      68, QMetaType::Bool, 0x00095401,
      69, QMetaType::Bool, 0x00095401,
      70, QMetaType::Bool, 0x00495103,
      71, QMetaType::Bool, 0x00095401,
      72, QMetaType::Bool, 0x00095401,
      73, QMetaType::Bool, 0x00495103,
      74, QMetaType::Bool, 0x00095401,
      75, QMetaType::Bool, 0x00095401,
      76, QMetaType::UInt, 0x00095401,
      77, QMetaType::Bool, 0x00495103,
      78, QMetaType::UInt, 0x00495103,
      79, QMetaType::Bool, 0x00095401,
      80, QMetaType::Bool, 0x00095401,
      81, QMetaType::Bool, 0x00095401,
      82, QMetaType::Bool, 0x00095401,
      83, QMetaType::Bool, 0x00095401,
      84, QMetaType::Bool, 0x00495103,
      85, QMetaType::Bool, 0x00095401,
      86, QMetaType::Bool, 0x00095401,
      87, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       5,
       0,
       0,
       0,
       0,
       1,
       0,
       0,
       0,
       2,
       0,
       0,
       3,
       0,
       0,
       4,
       0,
       0,
       4,
       0,
       0,
       6,
       0,
       0,
       0,
       0,
       7,
       0,
       8,
       0,
       0,
       9,
       0,
       0,
      10,
       0,
       0,
      11,
       0,
       0,
      11,
       0,
       0,
       0,
      11,
      12,
       0,
       0,
       0,
       0,
       0,
      13,
       0,
       0,
      13,

       0        // eod
};

void KWin::LibInput::Device::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Device *_t = static_cast<Device *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tapButtonMapChanged(); break;
        case 1: _t->leftHandedChanged(); break;
        case 2: _t->disableWhileTypingChanged(); break;
        case 3: _t->pointerAccelerationChanged(); break;
        case 4: _t->pointerAccelerationProfileChanged(); break;
        case 5: _t->enabledChanged(); break;
        case 6: _t->tapToClickChanged(); break;
        case 7: _t->tapAndDragChanged(); break;
        case 8: _t->tapDragLockChanged(); break;
        case 9: _t->middleEmulationChanged(); break;
        case 10: _t->naturalScrollChanged(); break;
        case 11: _t->scrollMethodChanged(); break;
        case 12: _t->scrollButtonChanged(); break;
        case 13: _t->clickMethodChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Device::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Device::tapButtonMapChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Device::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Device::leftHandedChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Device::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Device::disableWhileTypingChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Device::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Device::pointerAccelerationChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Device::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Device::pointerAccelerationProfileChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Device::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Device::enabledChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Device::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Device::tapToClickChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Device::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Device::tapAndDragChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Device::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Device::tapDragLockChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Device::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Device::middleEmulationChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Device::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Device::naturalScrollChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Device::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Device::scrollMethodChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (Device::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Device::scrollButtonChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (Device::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Device::clickMethodChanged)) {
                *result = 13;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Device *_t = static_cast<Device *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isKeyboard(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isAlphaNumericKeyboard(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isPointer(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isTouchpad(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isTouch(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isTabletTool(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->isTabletPad(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->supportsGesture(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 9: *reinterpret_cast< QString*>(_v) = _t->sysName(); break;
        case 10: *reinterpret_cast< QString*>(_v) = _t->outputName(); break;
        case 11: *reinterpret_cast< QSizeF*>(_v) = _t->size(); break;
        case 12: *reinterpret_cast< quint32*>(_v) = _t->product(); break;
        case 13: *reinterpret_cast< quint32*>(_v) = _t->vendor(); break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->supportsDisableEvents(); break;
        case 15: *reinterpret_cast< bool*>(_v) = _t->isEnabled(); break;
        case 16: *reinterpret_cast< int*>(_v) = _t->supportedButtons(); break;
        case 17: *reinterpret_cast< bool*>(_v) = _t->supportsCalibrationMatrix(); break;
        case 18: *reinterpret_cast< bool*>(_v) = _t->supportsLeftHanded(); break;
        case 19: *reinterpret_cast< bool*>(_v) = _t->leftHandedEnabledByDefault(); break;
        case 20: *reinterpret_cast< bool*>(_v) = _t->isLeftHanded(); break;
        case 21: *reinterpret_cast< bool*>(_v) = _t->supportsDisableEventsOnExternalMouse(); break;
        case 22: *reinterpret_cast< bool*>(_v) = _t->supportsDisableWhileTyping(); break;
        case 23: *reinterpret_cast< bool*>(_v) = _t->disableWhileTypingEnabledByDefault(); break;
        case 24: *reinterpret_cast< bool*>(_v) = _t->isDisableWhileTyping(); break;
        case 25: *reinterpret_cast< bool*>(_v) = _t->supportsPointerAcceleration(); break;
        case 26: *reinterpret_cast< qreal*>(_v) = _t->defaultPointerAcceleration(); break;
        case 27: *reinterpret_cast< qreal*>(_v) = _t->pointerAcceleration(); break;
        case 28: *reinterpret_cast< bool*>(_v) = _t->supportsPointerAccelerationProfileFlat(); break;
        case 29: *reinterpret_cast< bool*>(_v) = _t->defaultPointerAccelerationProfileFlat(); break;
        case 30: *reinterpret_cast< bool*>(_v) = _t->pointerAccelerationProfileFlat(); break;
        case 31: *reinterpret_cast< bool*>(_v) = _t->supportsPointerAccelerationProfileAdaptive(); break;
        case 32: *reinterpret_cast< bool*>(_v) = _t->defaultPointerAccelerationProfileAdaptive(); break;
        case 33: *reinterpret_cast< bool*>(_v) = _t->pointerAccelerationProfileAdaptive(); break;
        case 34: *reinterpret_cast< int*>(_v) = _t->tapFingerCount(); break;
        case 35: *reinterpret_cast< bool*>(_v) = _t->tapToClickEnabledByDefault(); break;
        case 36: *reinterpret_cast< bool*>(_v) = _t->isTapToClick(); break;
        case 37: *reinterpret_cast< bool*>(_v) = _t->supportsLmrTapButtonMap(); break;
        case 38: *reinterpret_cast< bool*>(_v) = _t->lmrTapButtonMapEnabledByDefault(); break;
        case 39: *reinterpret_cast< bool*>(_v) = _t->lmrTapButtonMap(); break;
        case 40: *reinterpret_cast< bool*>(_v) = _t->tapAndDragEnabledByDefault(); break;
        case 41: *reinterpret_cast< bool*>(_v) = _t->isTapAndDrag(); break;
        case 42: *reinterpret_cast< bool*>(_v) = _t->tapDragLockEnabledByDefault(); break;
        case 43: *reinterpret_cast< bool*>(_v) = _t->isTapDragLock(); break;
        case 44: *reinterpret_cast< bool*>(_v) = _t->supportsMiddleEmulation(); break;
        case 45: *reinterpret_cast< bool*>(_v) = _t->middleEmulationEnabledByDefault(); break;
        case 46: *reinterpret_cast< bool*>(_v) = _t->isMiddleEmulation(); break;
        case 47: *reinterpret_cast< bool*>(_v) = _t->supportsNaturalScroll(); break;
        case 48: *reinterpret_cast< bool*>(_v) = _t->naturalScrollEnabledByDefault(); break;
        case 49: *reinterpret_cast< bool*>(_v) = _t->isNaturalScroll(); break;
        case 50: *reinterpret_cast< bool*>(_v) = _t->supportsScrollTwoFinger(); break;
        case 51: *reinterpret_cast< bool*>(_v) = _t->scrollTwoFingerEnabledByDefault(); break;
        case 52: *reinterpret_cast< bool*>(_v) = _t->isScrollTwoFinger(); break;
        case 53: *reinterpret_cast< bool*>(_v) = _t->supportsScrollEdge(); break;
        case 54: *reinterpret_cast< bool*>(_v) = _t->scrollEdgeEnabledByDefault(); break;
        case 55: *reinterpret_cast< bool*>(_v) = _t->isScrollEdge(); break;
        case 56: *reinterpret_cast< bool*>(_v) = _t->supportsScrollOnButtonDown(); break;
        case 57: *reinterpret_cast< bool*>(_v) = _t->scrollOnButtonDownEnabledByDefault(); break;
        case 58: *reinterpret_cast< quint32*>(_v) = _t->defaultScrollButton(); break;
        case 59: *reinterpret_cast< bool*>(_v) = _t->isScrollOnButtonDown(); break;
        case 60: *reinterpret_cast< quint32*>(_v) = _t->scrollButton(); break;
        case 61: *reinterpret_cast< bool*>(_v) = _t->isSwitch(); break;
        case 62: *reinterpret_cast< bool*>(_v) = _t->isLidSwitch(); break;
        case 63: *reinterpret_cast< bool*>(_v) = _t->isTabletModeSwitch(); break;
        case 64: *reinterpret_cast< bool*>(_v) = _t->supportsClickMethodAreas(); break;
        case 65: *reinterpret_cast< bool*>(_v) = _t->defaultClickMethodAreas(); break;
        case 66: *reinterpret_cast< bool*>(_v) = _t->isClickMethodAreas(); break;
        case 67: *reinterpret_cast< bool*>(_v) = _t->supportsClickMethodClickfinger(); break;
        case 68: *reinterpret_cast< bool*>(_v) = _t->defaultClickMethodClickfinger(); break;
        case 69: *reinterpret_cast< bool*>(_v) = _t->isClickMethodClickfinger(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Device *_t = static_cast<Device *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 15: _t->setEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 20: _t->setLeftHanded(*reinterpret_cast< bool*>(_v)); break;
        case 24: _t->setDisableWhileTyping(*reinterpret_cast< bool*>(_v)); break;
        case 27: _t->setPointerAcceleration(*reinterpret_cast< qreal*>(_v)); break;
        case 30: _t->setPointerAccelerationProfileFlat(*reinterpret_cast< bool*>(_v)); break;
        case 33: _t->setPointerAccelerationProfileAdaptive(*reinterpret_cast< bool*>(_v)); break;
        case 36: _t->setTapToClick(*reinterpret_cast< bool*>(_v)); break;
        case 39: _t->setLmrTapButtonMap(*reinterpret_cast< bool*>(_v)); break;
        case 41: _t->setTapAndDrag(*reinterpret_cast< bool*>(_v)); break;
        case 43: _t->setTapDragLock(*reinterpret_cast< bool*>(_v)); break;
        case 46: _t->setMiddleEmulation(*reinterpret_cast< bool*>(_v)); break;
        case 49: _t->setNaturalScroll(*reinterpret_cast< bool*>(_v)); break;
        case 52: _t->setScrollTwoFinger(*reinterpret_cast< bool*>(_v)); break;
        case 55: _t->setScrollEdge(*reinterpret_cast< bool*>(_v)); break;
        case 59: _t->setScrollOnButtonDown(*reinterpret_cast< bool*>(_v)); break;
        case 60: _t->setScrollButton(*reinterpret_cast< quint32*>(_v)); break;
        case 66: _t->setClickMethodAreas(*reinterpret_cast< bool*>(_v)); break;
        case 69: _t->setClickMethodClickfinger(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject KWin::LibInput::Device::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_KWin__LibInput__Device.data,
      qt_meta_data_KWin__LibInput__Device,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *KWin::LibInput::Device::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::LibInput::Device::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KWin__LibInput__Device.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::LibInput::Device::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 70;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 70;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 70;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 70;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 70;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 70;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void KWin::LibInput::Device::tapButtonMapChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KWin::LibInput::Device::leftHandedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void KWin::LibInput::Device::disableWhileTypingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void KWin::LibInput::Device::pointerAccelerationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void KWin::LibInput::Device::pointerAccelerationProfileChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void KWin::LibInput::Device::enabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void KWin::LibInput::Device::tapToClickChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void KWin::LibInput::Device::tapAndDragChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void KWin::LibInput::Device::tapDragLockChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void KWin::LibInput::Device::middleEmulationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void KWin::LibInput::Device::naturalScrollChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void KWin::LibInput::Device::scrollMethodChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void KWin::LibInput::Device::scrollButtonChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void KWin::LibInput::Device::clickMethodChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
