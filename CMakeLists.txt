cmake_minimum_required(VERSION 3.1.0)

project(NoisYimg)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

if(CMAKE_VERSION VERSION_LESS "3.7.0")
    set(CMAKE_INCLUDE_CURRENT_DIR ON)
endif()

add_executable(NoisYimg
    mainwindow.ui
    mainwindow.cpp
    noisytypechoosedlg.ui
    noisytypechoosedlg.cpp
    main.cpp
    resources.qrc
)

# Qt
find_package(Qt5 COMPONENTS Widgets REQUIRED)
target_link_libraries(NoisYimg Qt5::Widgets)

# OpenCV
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
target_link_libraries(NoisYimg ${OpenCV_LIBS})



