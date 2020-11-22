//
// Created by knichols on 11/21/20.
//

#include <QtWidgets>
#include <src/headers/WindowSetup.h>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    new WindowSetup(850, 350);


    return app.exec();
}