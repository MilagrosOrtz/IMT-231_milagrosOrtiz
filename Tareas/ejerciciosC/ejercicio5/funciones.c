#include <stdio.h>
#include "funciones.h"
int num1 = 0;
int num2 = 0;

void recibirNumeros(){
    printf(MENSAJE1);
    scanf("%d", &num1);
    printf(MENSAJE2);
    scanf("%d", &num2);
}

int suma(int a, int b){
    int resultado = a+b;
    printf("El resultado de la suma es: %d \n",resultado);
    return resultado;
}

int resta(int a, int b){
    int resultado = a-b;
    printf("El resultado de la resta es: %d \n", resultado);
    return resultado;
}

int multiplicar(int a, int b){
    int resultado = a*b;
    printf("El resultado de la multiplicacion es: %d \n", resultado);
    return resultado;
}