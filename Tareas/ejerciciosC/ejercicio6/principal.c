#include <stdio.h>
#include "funciones.h"


int main(void){
    int num1=0;
    int num2=0;

    while(1){
        printf("Ingresa el primer numero: \n");
        scanf("%d",&num1);
        printf("Ingresa el segundo numero: \n");
        scanf("%d",&num2);
        if(num1==0 && num2==0){
            printf("Saliendo...\n");
            break;
        }
        compararNumeros(num1,num2);
    }



    return 0;
}