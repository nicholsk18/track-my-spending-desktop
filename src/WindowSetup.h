//
// Created by knichols on 11/21/20.
//

#ifndef TRACK_MY_SPENDING_DESKTOP_WINDOWSETUP_H
#define TRACK_MY_SPENDING_DESKTOP_WINDOWSETUP_H

#include <QtWidgets>

class WindowSetup
{
private:
    QWidget window;
    const char* appName;
    int width;
    int height;

public:
    WindowSetup(const char* name, int width, int height);
    ~WindowSetup();
};

#endif //TRACK_MY_SPENDING_DESKTOP_WINDOWSETUP_H
