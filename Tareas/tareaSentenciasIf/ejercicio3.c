#include <stdio.h>

int main (void){
   int año = 0;
   printf ("Ingrese el año: \n"); 
   scanf("%d", &año);
   if (año% 4 ==0 && (año % 100 != 0|| año % 400 ==0)){
    printf("%d es un año bisiesto \n", año);
   }else {
    printf("%d no es un año bisiesto \n", año);
   }
   return 0;
}