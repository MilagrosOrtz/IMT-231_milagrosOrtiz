#include <stdio.h>
#include "funciones.h"

int main(void) {
    int entrada;

    while (1) {  
        printf("Ingresa un numero (-1 para salir): ");
        scanf("%d", &entrada);

        if (entrada == -1) {
            break;  
        }

        Numero num;
        num.valor = entrada;
        num.tipo = determinarTipo(entrada);

        
        switch (num.tipo) {
            case PAR:
                printf("El numero %d es PAR\n", num.valor);
                break;
            case IMPAR:
                printf("El numero %d es IMPAR\n", num.valor);
                break;
        }
    }

    printf("Programa finalizado.\n");
    return 0;
}