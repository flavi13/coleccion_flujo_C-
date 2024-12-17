//
// Created by Flavia Rivero on 5/12/24.
//


#ifndef CIENCIA_H
#define CIENCIA_H
#include "matematicas/matematicas.h"


namespace ciencia {
    namespace Fisica {
        const double VELOCIDAD_DE_LA_LUZ = 299792458.0; // m/s
        double calcularEnergia(double masa);
    }
    namespace matematicas {
        const double DISCRIMINANT_THRESHOLD = 1e-7;
        std::tuple<bool, double, double> resolverEcuacionCuadratica(double a, double b, double c);
    }
}
#endif //CIENCIA_H