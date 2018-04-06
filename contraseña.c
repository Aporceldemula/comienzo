
#include <stdio.h>

 /*programa que pida una contraseña y hasta que no coincida con 4567 nodeje de ejecutarse*/

int main(){

  /*inicializar*/
   int num;

  /*pedir al usuario*/
   printf("introduce la contraseña \n");
   scanf("%d", &num);

   /*condicion*/
    while(num != 4567){

      printf("introduce la contraseña \n");
      scanf("%d", &num);

    }


}
