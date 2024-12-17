//
// Created by Flavia Rivero on 5/12/24.
//

#ifndef GEOMETRIA_H
#define GEOMETRIA_H

namespace Geometria {
    // Declaraciones de funciones para calcular áreas
    double calcularAreaTriangulo(double base, double altura);
    double calcularAreaCirculo(double radio);
    double calcularAreaCuadrado(double lado);

    // Declaraciones de funciones para calcular perímetros
    double calcularPerimetroTriangulo(double lado1, double lado2, double lado3);
    double calcularPerimetroCirculo(double radio);
    double calcularPerimetroCuadrado(double lado);
}

#endif // GEOMETRIA_H