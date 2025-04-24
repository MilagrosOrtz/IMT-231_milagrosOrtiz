#include <stdio.h>
#include "funciones.h"


TipoNumero determinarTipo(int n) {
    if (n % 2 == 0) {
        return PAR;
    } else {
        return IMPAR;
    }
}

