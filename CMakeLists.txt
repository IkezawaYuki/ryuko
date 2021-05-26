cmake_minimum_required(VERSION 3.17)
project(ryuko)

set(CMAKE_CXX_STANDARD 17)

add_executable(ryuko main.cpp
        IdNo.cpp IdNo.h Point2d.cpp Point2d.h Circle.h Counter.h Boolean.h IntStack.h Member.cpp Member.h ResigningMember.h SeniorMember.cpp SeniorMember.h Shape.h MathException.h Array.cpp Array.h BoolArray.h)