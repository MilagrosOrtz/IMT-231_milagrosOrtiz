#include <stdio.h>

int main(void){
    char palabra[100];
    int longitud =0;
    int i=0;

    printf("Ingresa una palabra: ");
    scanf("%s", palabra);

    while(palabra[longitud] != '\0'){
        longitud++;
    }

    printf("La palabra invertida es: ");
    for (i= longitud -1; i>=0; i--){
        printf("%c", palabra[i]);
    }
    return 0;
}