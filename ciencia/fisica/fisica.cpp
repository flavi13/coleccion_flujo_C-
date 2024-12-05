//
// Created by Flavia Rivero on 5/12/24.
//

#include "fisica.h"

#include "../Ciencia.h"

    namespace Fisica {
        double calcularEnergia(double masa) {
            return masa * VELOCIDAD_DE_LA_LUZ * VELOCIDAD_DE_LA_LUZ;
        }
    }