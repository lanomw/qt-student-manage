#include <QApplication>
#include "src/MainWidget.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    MainWidget widget;
    widget.show();

    return QApplication::exec();
}