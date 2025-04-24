#include <stdio.h>
#include "funciones.h"

int main(void) {
    int opcion =0 ;
    int num =0 ;

    while (10) {
        printf("\n--- MENU ---\n");
        printf(" 1. Verificar si un numero es primo\n 2. Calcular el factorial de un numero\n 3. Contar numeros pares e impares entre 1 y N\n 4. Mostrar multiplos de 3 entre 1 y N\n 5. Salir del programa\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("Ingrese un numero entero positivo: ");
                scanf("%d", &num);
                while (num <= 0) {
                    printf("Numero invalido. Intente de nuevo: ");
                    scanf("%d", &num);
                }
                if (esPrimo(num)){
                    printf("%d es primo.\n", num); //si retorna 1 es primo
                }else{
                    printf("%d no es primo.\n", num); //si retorna 0 no es primo
                }  
                break;

            case 2:
                printf("Ingrese un numero entero positivo: ");
                scanf("%d", &num);
                while (num <= 0) {
                    printf("Numero invalido. Intente de nuevo: ");
                    scanf("%d", &num);
                }
                printf("El factorial de %d es %d \n", num, factorial(num));
                break;

            case 3:
                printf("Ingrese un numero entero positivo: ");
                scanf("%d", &num);
                while (num <= 0) {
                    printf("Numero invalido. Intente de nuevo: ");
                    scanf("%d", &num);
                }
                contarDigitos(num);
                break;

            case 4:
                printf("Ingrese un numero entero positivo: ");
                scanf("%d", &num);
                while (num <= 0) {
                    printf("Numero invalido. Intente de nuevo: ");
                    scanf("%d", &num);
                }
                printf("Los multiplos de 3 entre 1 y %d son:\n", num);
                multiplos3(num);
                break;

            case 5:
                printf("Saliendo...\n");
                return 0;

            default:
                printf("Opcion invalida.\n");
                break;
        }
    }
    return 0;
}
