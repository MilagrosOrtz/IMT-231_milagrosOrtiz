#include <stdio.h>
int main(void){
    int N = 0;
    printf("Ingresa un numero: ");
    scanf("%d", &N);
    for(int i=1; i<= 10; i++){
        int resultado = N*i;
        printf(" %d * %d = %d \n", N, i, resultado);

    }
    return 0;
}