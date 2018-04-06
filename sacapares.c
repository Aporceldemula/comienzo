
#include <stdio.h>

/*imprime los numeros pares del 26 al 10*/

int main(){

  /*inicializar*/
    int num=26;

  /*condicion*/

    printf("%d \n", num); //si no no imprime el 26

    while(num!=10){

      num--;

      if(num%2==0){

          printf("%d \n", num);
      };

    }

}
