#include <stdio.h>
int main(void){
    int i=0;
    int num =0;
    printf("Ingresa un numero: ");
    scanf("%d", &num);
    
    if(num == 0){
        i=1;
    }else{
        while(num > 0){
            num = num /10;
            i++;
        }
    }
    
    printf("El numero ingresado tiene %d digitos \n ", i);

    return 0;
}