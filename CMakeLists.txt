cmake_minimum_required(VERSION 3.10)

project(coleccion_flujo_C-)


set(CMAKE_CXX_STANDARD 11)

add_executable(coleccion_flujo_C-
        main.cpp
        matematicas/matematicas.cpp
        matematicas/matematicas.h
        geometria/circulo.cpp
        geometria/cuadrado.cpp
        geometria/geometria.h
        geometria/triangulo.cpp)
