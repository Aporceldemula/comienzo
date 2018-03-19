#include <stdio.h>

/*pedir al usuario que introduzca tres numeros reales y mostrar cual esd el mayor*/

int main(){

  /*inicializacion de variables*/
   float num;
   float num1;
   float num2;

  /*pedir al usuario*/
   printf("introduce los numeros \n");
   scanf("%.2f %.2f %.2f", &num, &num1, &num2);

  /*evaluacion*/
   if(num<=num1<=num2){
       printf("%f es el mayor \n", num2);
   }

}
