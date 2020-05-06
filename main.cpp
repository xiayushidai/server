#include "device.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //Widget w;
    //w.show();
    libinput_device *zjg;
    KWin::LibInput::Device *dev=new KWin::LibInput::Device(zjg);

    return a.exec();
}
