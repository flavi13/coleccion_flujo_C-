//
// Created by Flavia Rivero on 5/12/24.
//

#include "../Ciencia.h"

    namespace Fisica {
        double calcularEnergia(double masa) {
            return masa * ciencia::Fisica::VELOCIDAD_DE_LA_LUZ * ciencia::Fisica::VELOCIDAD_DE_LA_LUZ;
        }
    }