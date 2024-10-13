cmake_minimum_required(VERSION 3.28)
project(exercices)

set(CMAKE_CXX_STANDARD 17)

add_executable(exercices main.cpp
        amovable.h
        amovable.h
        amovable.cpp
        alive.h
        entity.h
        entity.cpp
        vector2.cpp
        alive.cpp
        iattacker.h
        staticobject.h
        staticobject.cpp
        breakableobject.h
        breakableobject.cpp
        mob.h
        mob.cpp
        player.h
        player.cpp
)
