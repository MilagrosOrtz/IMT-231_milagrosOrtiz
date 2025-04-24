#include <stdio.h>

int main(void) {
    int num = 0;
    

    while (1) {
        printf("Ingresa un numero positivo\nIngresa un numero negativo o 0 para salir\n");
        scanf("%d", &num);

        if (num <= 0)
            break;
        int resultado = 1;
        for (int i = 1; i <= num; ++i) {
            resultado *= i;
        }

        printf("El factorial de %d es: %d\n", num, resultado);
    }

    return 0;
}
