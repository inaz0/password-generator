# --------------------------------------------------------------
# Project updated by QtCreator Fri 17 Sep 2021 10:40:19 AM +0430
# --------------------------------------------------------------
cmake_minimum_required(VERSION 3.5)

project(PasswordGenerator LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets REQUIRED)

set(headers 
    passwordgenerator.h)
set(sources
    main.cpp
    passwordgenerator.cpp)
set(forms
    passwordgenerator.ui)
set(resources
    images.qrc)

set(PROJECT_SOURCES
    ${headers}
    ${sources}
    ${forms}
    )

qt5_add_resources(PROJECT_SOURCES ${resources})

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(${PROJECT_NAME}
        ${PROJECT_SOURCES}
        )
else()
    if(ANDROID)
        add_library(${CMAKE_PROJECT_NAME} SHARED
            ${PROJECT_SOURCES}
            )
    else()
        add_executable(${CMAKE_PROJECT_NAME}
            ${PROJECT_SOURCES}
            )
    endif()
endif()

target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
