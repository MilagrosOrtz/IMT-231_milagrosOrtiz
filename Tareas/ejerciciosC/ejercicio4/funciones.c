#include <stdio.h>
#include "funciones.h"

int sumatotal=0;

int sumaAcumulada(int a){
        if(a >= 0){
        sumatotal = sumatotal + a;
    }
    return sumatotal;
}

void resultado(){
    printf("La suman de los numeros ingresados es %d \n ", sumatotal );
}