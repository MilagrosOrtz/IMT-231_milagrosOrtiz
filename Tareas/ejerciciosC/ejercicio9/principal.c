#include <stdio.h>

int invertirNumero(int n) {
    int invertido = 0;
    while (n > 0) {
        invertido = invertido * 10 + (n % 10);
        n /= 10;
    }
    return invertido;
}

int main(void) {
    int num = 0;

    while (1) {
        printf("Ingresa un número (de un solo dígito para salir):\n");
        scanf("%d", &num);

        if (num >= 0 && num < 10) {
            printf("Saliendo..\n");
            break;
        }

        int resultado = invertirNumero(num);
        printf("Número invertido: %d\n", resultado);
    }

    return 0;
}
