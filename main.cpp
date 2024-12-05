//
// Created by Flavia Rivero on 29/11/24.
//

#include <iostream>
#include "matematicas/matematicas.h"
#include <string>
#include "geometria/triangulo.h"
#include "geometria/circulo.h"
#include "geometria/cuadrado.h"

int main() {

//primer ejercicio
    std::cout << "Suma: " << Matematicas::suma(5, 3) << std::endl;
    std::cout << "Resta: " << Matematicas::resta(5, 3) << std::endl;

//segundo ejercicio
    int num;
    std::string text;
    std::cout << "Ingresa un número: ";
    std::cin >> num;
    std::cout << "Ingresa un texto: ";
    std::cin >> text;
    std::cout << "El número ingresado es: " << num << "\nEl texto ingresado es: " << text << std::endl;

    double areatriangulo = Geometria::calcularAreaTriangulo(5,4);
    double areacirculo = Geometria::calcularAreaCirculo();
    double areacuadrado = Geometria::calcularAreaCuadrado();

    double perimetroTriangulo = Geometria::calcularPerimetroTriangulo(lado1, lado2, lado3);
    double perimetroCirculo = Geometria::calcularPerimetroCirculo(radio);
    double perimetroCuadrado =Geometria::calcularPerimetroCuadrado(lado);
    double base = 5.0, altura = 3.0, radio = 3.0, lado = 4.0;

    std::cout << "Área del triángulo: " << Geometria::calcularAreaTriangulo(base, altura) << std::endl;
    std::cout << "Área del círculo: " << Geometria::calcularAreaCirculo(radio) << std::endl;
    std::cout << "Área del cuadrado: " << Geometria::calcularAreaCuadrado(lado) << std::endl;

//ejercicio 3
    return 0;
}



