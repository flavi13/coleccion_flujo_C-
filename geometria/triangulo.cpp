//
// Created by Flavia Rivero on 5/12/24.
//

#include "geometria.h"

namespace Geometria {
    double calcularAreaTriangulo(double base, double altura) {
        return (base * altura) / 2;
    }

    double calcularPerimetroTriangulo(double lado1, double lado2, double lado3) {
        return lado1 + lado2 + lado3;
    }
}

