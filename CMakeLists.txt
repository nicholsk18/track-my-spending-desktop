cmake_minimum_required(VERSION 3.5)
project(track-my-spending-desktop LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets LinguistTools REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets LinguistTools REQUIRED)

set(TS_FILES track-my-spending-desktop_en_US.ts src/main.cpp src/WindowSetup.h src/WindowSetup.cpp src/components/MainLayout.cpp src/components/MainLayout.cpp src/components/MainLayout.h)

add_executable(track-my-spending-desktop
        src/main.cpp
        ${TS_FILES}
        )

target_link_libraries(track-my-spending-desktop PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

qt5_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})
