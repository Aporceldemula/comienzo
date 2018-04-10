
#include <stdio.h>

/*pedir numeros positivos al usuario e ir sumandolos, si se introduce un negativo o un cero salir del bucle*/

int main(){

  /*inicializacion*/
   int num;
   int suma=0;

  /*pedir al usuario*/
   do{
       printf("introduce un numero \n");
       scanf("%d", &num);
       suma=suma+num;
   }while((num>0)&&(num!=0));

       printf("la suma da: %d \n", suma);

}
