#include <stdio.h>
#include "funciones.h"

int main(void) {
    Semaforo estado = ROJO;
    int ciclos = 0;

    while (ciclos < 10) {
        mostrarEstado(estado);
        estado = siguienteEstado(estado);
        ciclos++;
    }

    printf("Fin de la simulación.\n");
    return 0;
}
