cmake_minimum_required(VERSION 3.30)
project(week4_practice)

set(CMAKE_CXX_STANDARD 20)

add_executable(week4_practice Test.cpp
        Instructor.cpp
        Course.cpp
        Course.h
        Assignment.cpp
        Assignment.h
        Instructor.h
        Student.cpp
        Student.h
        Submission.cpp
        Submission.h)
