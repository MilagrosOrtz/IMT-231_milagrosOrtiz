#include <stdio.h>
#include "funciones.h"

void mostrarEstado(Semaforo estado) {
    switch (estado) {
        case ROJO:
            printf("🔴 Semáforo en ROJO");
            break;
        case VERDE:
            printf("🟢 Semáforo en VERDE");
            break;
        case AMARILLO:
            printf("🟡 Semáforo en AMARILLO");
            break;
    }
}

Semaforo siguienteEstado(Semaforo estado) {
       if (estado == AMARILLO) {
        return ROJO;
    } else {
        return estado + 1;
    }
}
