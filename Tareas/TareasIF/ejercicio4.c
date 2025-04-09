#include <stdio.h>

int main(void){
    int edad =0;
    printf("Ingrese su edad: \n");
    scanf("%d", &edad);
    if(edad <13){
        printf("Corresponde a infancia");
    }else if( edad >13 && edad <17){
        printf("Corresponde a Adolescencia");
    }else if (edad >= 18){
        printf("Corresponde a Adultez");
    }
    return 0;
}