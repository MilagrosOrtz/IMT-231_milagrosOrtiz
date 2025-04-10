#include <stdio.h>

int main (void){
    int numero =0;
    printf("Ingrese un numero: \n");
    scanf("%d", &numero);
    if(numero % 2==0){
        printf("El numero es par");
    }else{
        printf("El numero es impar");
    }



    return 0;
}