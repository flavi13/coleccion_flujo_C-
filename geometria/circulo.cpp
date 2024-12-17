//
// Created by Flavia Rivero on 5/12/24.
//

#include "geometria.h"
#include <cmath>

namespace Geometria {
    double calcularAreaCirculo(double radio) {
        return M_PI * radio * radio;
    }

    double calcularPerimetroCirculo(double radio){
    return 2 * M_1_PI * radio;
    }
}
