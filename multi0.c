
#include <stdio.h>

/*multiplica dos numeros si el numero es 0 mensaje "el producto de 0 por cualquier numero es 0*/

int main(){

  /*inicializar*/
   int num;
   int num1;

  /*pedir por pantalla*/
   printf("introduce los numeros \n");
   scanf("%d %d", &num, &num1);

  /*condicion*/
   if((num == 0) || (num1 == 0)){ /*preguntar(num || num1 == 0*/

    printf("el producto de 0 por cualquer numero es 0 \n");

   }else{

      int resul=num*num1;
      printf("el resultado de multiplicar %d x %d es %d \n", num, num1, resul);

   }

}
