cmake_minimum_required(VERSION 3.17)
project(ryuko)

set(CMAKE_CXX_STANDARD 17)

add_executable(ryuko main.cpp
        Date.cpp
        Date.h
        Accounting.cpp
        Accounting.h
        IdNo.cpp IdNo.h Point2d.cpp Point2d.h Circle.h Counter.h Boolean.h IntStack.h member_pointer.cpp Member.cpp Member.h ResigningMember.h SeniorMember.cpp SeniorMember.h MemberDownCast.cpp Shape.h)