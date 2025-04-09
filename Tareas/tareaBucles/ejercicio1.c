#include <stdio.h>

int main(void){
    int i=0;
    int N = 0;

    printf("Ingrese un numero:");
    scanf("%d", &N);
    for(i=0; i<= N ;i++){
        printf("%d \n",i);
    }
    
    return 0;
}