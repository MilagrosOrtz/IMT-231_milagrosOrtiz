#include <stdio.h>

int main(void) {
    int number = 0;
    
    printf("Ingresa un numero: \n");
    scanf("%d", &number);
    
    if (number == 0) {  
        printf("El numero es 0\n");
    } else if (number < 0) {  
        printf("El numero ingresado es negativo\n");
    } else { 
        printf("El numero es positivo\n");
    }

    return 0;
}