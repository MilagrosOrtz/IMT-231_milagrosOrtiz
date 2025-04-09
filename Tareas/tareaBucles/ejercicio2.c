#include <stdio.h>

int main(void) {
    int N = 0;
    int i = 1;
    int resultado = 0;

    printf("Ingresa un número: ");
    scanf("%d", &N);

    while (i <= N) {
        resultado = resultado + i;
        i++;
    }

    printf("La suma de los números del 1 al %d es: %d\n", N, resultado);

    return 0;
}
