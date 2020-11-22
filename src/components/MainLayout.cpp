//
// Created by knichols on 11/21/20.
//

#include "MainLayout.h"

MainLayout::MainLayout()
{
    QPushButton *button1 = new QPushButton("one");
    QPushButton *button2 = new QPushButton("two");
    QPushButton *button3 = new QPushButton("three");
    QPushButton *button4 = new QPushButton("four");
    QPushButton *button5 = new QPushButton("five");

    mainLayout->addWidget(button1, 0, 0);
    mainLayout->addWidget(button2, 0, 1);
    mainLayout->addWidget(button3, 1, 0, 1, 2);
    mainLayout->addWidget(button4, 2, 0);
    mainLayout->addWidget(button5, 2, 1);
}

QGridLayout* MainLayout::getLayout() {
    return mainLayout;
}