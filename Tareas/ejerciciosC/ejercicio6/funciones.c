#include<stdio.h>
#include "funciones.h"

void compararNumeros(int a, int b) {
    if (a > b) {
        printf("%d es mayor que %d\n", a, b);
    } else if (b > a) {
        printf("%d es mayor que %d\n", b, a);
    } else {
        printf("Ambos números son iguales.\n");
    }
}