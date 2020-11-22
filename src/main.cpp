//
// Created by knichols on 11/21/20.
//

#include <QtWidgets>
#include <src/WindowSetup.h>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    new WindowSetup("Finance Manager", 1150, 750);


    return app.exec();
}