cmake_minimum_required(VERSION 2.8.12)

project(ME570_Exam1_TakeHome)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

find_package(Qt5Core)

SET(MY_SRCS
    main.cpp
    Animal.h
    Animal.cpp
    Mammal.h
    Mammal.cpp
    Bird.h
    Bird.cpp
    Insect.h
    Insect.cpp
    Reptile.h
    Reptile.cpp
    )

add_executable(${PROJECT_NAME} ${MY_SRCS})

target_link_libraries(${PROJECT_NAME} Qt5::Core)
