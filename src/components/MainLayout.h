//
// Created by knichols on 11/21/20.
//

#ifndef TRACK_MY_SPENDING_DESKTOP_MAINLAYOUT_H
#define TRACK_MY_SPENDING_DESKTOP_MAINLAYOUT_H


#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>

class MainLayout {
private:
    QGridLayout *mainLayout = new QGridLayout;

public:
    MainLayout();
    QGridLayout* getLayout();

};


#endif //TRACK_MY_SPENDING_DESKTOP_MAINLAYOUT_H
