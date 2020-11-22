//
// Created by knichols on 11/21/20.
//

#include "WindowSetup.h"

WindowSetup::WindowSetup(const char* name, int width, int height) : appName(name), width(width), height(height)
{
    window.resize(width, height);
    window.show();
    window.setWindowTitle(
            QApplication::translate("toplevel", appName)
    );
}