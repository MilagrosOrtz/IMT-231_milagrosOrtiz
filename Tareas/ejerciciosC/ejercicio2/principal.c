#include <stdio.h>
#include "funciones.h"


int main(void) {
    int numero;

    while (1) {  // Bucle infinito
        printf("Ingresa un número entero positivo (0 para salir): ");
        scanf("%d", &numero);

        if (numero == 0) {
            printf("Programa finalizado\n");
            break;  // Salir del bucle
        }

        if (numero < 0) {
            printf("Por favor, ingresa solo números positivos.\n");
            continue;
        }

        int digitos = contarDigitos(numero);
        printf("El número tiene %d dígitos\n", digitos);
    }

    return 0;
}
