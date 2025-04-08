#include <stdio.h>

int main(void){
	int numberA=0;
	int numberB=0;
	printf("Ingrese el primer numero: \n");
	scanf("%d", &numberA);
	printf("Ingrese el segundo numero: \n");
	scanf("%d", &numberB);
	
	if(numberA > numberB){
		printf("El numero mayor es: %d \n ", numberA);
	}if(numberA = numberB){
		printf("Los numeros son iguales");
		}else{
			printf("El numero mayor es: %d \n", numberB);
			}
	return 0;
	}