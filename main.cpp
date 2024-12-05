//
// Created by Flavia Rivero on 29/11/24.
//
#include <iostream>
#include "matematicas/Matematicas.h"
#include "geometria/Geometria.h"

int main() {
//ejercicio 1
    int num;
    std::cout << "Ingresa un número: ";
    std::cin >> num;
    std::cout << "El numero ingresado es: " << num << std::endl;

    matematicas::Matematicas mat;
    std::cout << "Suma de 3 y 4: " << mat.sumar(3, 4) << std::endl;
    std::cout << "Resta de 7 y 2: " << mat.restar(7, 2) << std::endl;

//ejercicio 2

    double base = 5.0, altura = 10.0, radio = 3.0, lado = 4.0;

    double areaTriangulo = Geometria::calcularAreaTriangulo(base, altura);
    double areaCirculo = Geometria::calcularAreaCirculo(radio);
    double areaCuadrado = Geometria::calcularAreaCuadrado(lado);

    std::cout << "Área del triángulo: " << areaTriangulo << std::endl;
    std::cout << "Área del círculo: " << areaCirculo << std::endl;
    std::cout << "Área del cuadrado: " << areaCuadrado << std::endl;


//ejercicio 3
    double perimetroTriangulo = Geometria::calcularPerimetroTriangulo(lado1, lado2, lado3);
    double perimetroCirculo = Geometria::calcularPerimetroCirculo(radio);
    double perimetroCuadrado = Geometria::calcularPerimetroCuadrado(lado);

    std::cout << "Perimetro del triangulo: " << perimetroTriangulo << std::endl;
    std::cout << "Perimetro del circulo: " << perimetroCirculo << std::endl;
    std::cout << "Perimetro del cuadrado: " << perimetroCuadrado << std::endl;

//ejercicio 4

    return 0;
}