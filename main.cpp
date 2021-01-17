#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif

#include <QTextCodec>
#include <QtWidgets/QApplication>
#include "uiOffice2016.h"


int main(int argc, char *argv[])
{
//    QTextCodec::setCodecForTr(QTextCodec::codecForName("utf-8"));
//    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("utf-8"));
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("utf-8"));
    //QTextCodec::setCodecForLocale(QTextCodec::codecForName("GBK2312"));
    std::locale::global(std::locale(""));

    QApplication a(argc, argv);
    uiOffice2016 w1;
    w1.show();

    uiTEST_MainWindow w2;
    w2.show();
    return a.exec();
}
