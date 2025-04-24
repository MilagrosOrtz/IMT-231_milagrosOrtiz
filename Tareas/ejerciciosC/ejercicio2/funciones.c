#include <stdio.h>
#include "funciones.h"

int contarDigitos(int numero) {
    int contador = 0;

    if (numero == 0) {
        return 1;  // 0 tiene 1 dígito
    }

    while (numero > 0) {
        numero = numero / 10;
        contador++;
    }

    return contador;
}
