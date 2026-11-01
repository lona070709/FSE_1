cmake_minimum_required(VERSION 3.14)

project(${CMAKE_PROJECT_NAME}_lib VERSION 0.0.1 LANGUAGES C CXX)

add_library(
        ${PROJECT_NAME}

        src/Person.cpp
        src/Player.cpp
        src/Coach.cpp
        src/FootballTeam.cpp
)

target_include_directories(${PROJECT_NAME} PUBLIC include)

add_library(${CMAKE_PROJECT_NAME}::lib ALIAS ${PROJECT_NAME})