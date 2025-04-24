#include <stdio.h>
#include "funciones.h"

int esPrimo(int a) {
    if (a <= 1) { //el 1 no se considera numero primo 
        return 0;
    }
    for (int i = 2; i < a; i++) { //si es divisible entre 2 ya no es primo
        if (a % i == 0) {
            return 0;
        }
    }
    return 1; // si es que no se divide entre 2 y no es 1, retorna verdadero
}

int factorial(int a) {
    int resultado = 1;
    for (int i = 2; i <= a; i++) {
        resultado = resultado * i;
    }
    return resultado;
}

void contarDigitos(int a) {
    int pares=0;
    int impares=0;
    for (int i = 1; i <= a; i++) {
        if (i % 2 == 0){
            pares++;
        }else{
            impares++;
        }      
    }
    printf(" Pares: %d\n Impares: %d\n", pares, impares);
}

void multiplos3(int a) {
    for (int i = 1; i <= a; i++) {
        if (i % 3 == 0){
            printf("%d \n", i);
        }       
    }
}

