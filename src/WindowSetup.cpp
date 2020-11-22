//
// Created by knichols on 11/21/20.
//

#include "headers/WindowSetup.h"

WindowSetup::WindowSetup(int width, int height) : width(width), height(height)
{
    window.resize(width, height);
    window.show();
    window.setWindowTitle(
                QApplication::translate("toplevel", "Finance Manager")
            );
}