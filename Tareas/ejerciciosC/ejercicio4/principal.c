#include <stdio.h>
#include "funciones.h"

int main(void){
    int num =0;
    while(10){
        printf("Ingresa numero positivos.\n si deseas finalizar el blucle ingresa un numero negativo\n");
        scanf("%d",&num);
        if (num < 0){
            break;
         }
         sumaAcumulada(num);
    }
    resultado();
   return 0; 
}