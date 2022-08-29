#include "myhttpdownload.h"
#include <QtWidgets/QApplication>
#include <QDebug>
#include <QTime>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyHttpDownload w;
    w.show();
    return a.exec();
}
