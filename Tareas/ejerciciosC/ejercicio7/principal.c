#include <stdio.h>

int main(void){
    int num=0;
    int contador=0;
    while(1){
        printf("Ingresa un numero\n -1 para salir \n");
        scanf("%d", &num);
        if (num == -1) break;
        if (num %3 ==0){
            contador ++ ;
        }
    }
    printf("Total de multiplos de 3 ingreados es: %d", contador);
}