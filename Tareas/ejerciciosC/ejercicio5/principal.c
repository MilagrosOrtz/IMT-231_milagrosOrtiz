#include <stdio.h>
#include "funciones.h"

int main (void){
    int opcion =0;
    while(12){
        printf("Selecciona una opcion: \n 1.Suma de dos numeros \n 2.Resta de dos numeros \n 3. Multiplicar dos numeros \n 4.Salir \n");
        scanf("%d", &opcion);
        switch(opcion){
            case 1:
                recibirNumeros();
                suma(num1,num2);  
                break;
            case 2: 
                recibirNumeros();
                resta(num1,num2);
                break;
            case 3:
                recibirNumeros();
                multiplicar(num1,num2); 
                break;
            case 4:
                printf("Saliendo del programa ...\n");
                return 0;
            default:
            printf("Opcion invalida \n");

        }
    }










    return 0;
}