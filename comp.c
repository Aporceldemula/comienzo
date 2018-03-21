#include <stdio.h>

/*pedir al usuario que introduzca tres numeros reales y mostrar cual esd el mayor*/

int main(){

  /*inicializacion de variables*/
   float num;
   float num1;
   float num2;

  /*pedir al usuario*/
   printf("introduce el numero \n");
   scanf("%f", &num);
   printf("introduce el numero \n");
   scanf("%f", &num1);
   printf("introduce el tercer numero \n");
   scanf("%f", &num2);

  /*comparacion*/
   if ((num<=num1)&&(num1<=num2)){

    printf("%.2f es el mayor \n", num2);

   }else
       if ((num<=num1)&&(num1>=num2)){

         printf("%.2f es el mayor \n", num1);

       }else
           if((num>=num1)&&(num1>=num2)){

          printf("%.2f es el mayor \n", num);

       }else
           if((num>=num1)&&(num1<=num2)){
            printf("%.2f es el mayor \n", num);
           };
}
