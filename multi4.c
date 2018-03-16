#include <stdio.h>
 
 /*multiplicar 2 numeros de 4 cifras que tecle el ususario usando long*/

int main(){

 /*inicializar las variables*/
  long int num;
  long int num1;

  /*introduccion de datos*/
   printf("introduce los numeros \n");
   scanf("%ld %ld", &num, &num1);

   /*calculo y lo saco por pantalla*/
    long int producto=num*num1;
     printf("%ld x %ld = %ld ",num, num1, producto);
     }
 
