#include <stdio.h>

/*pedir al usuario un numero y comprobar si es par*/

int main(){

  /*inicializacion*/
    int num;

  /*pedir al usuario*/
    printf ("introduce un numero \n");
    scanf("%d", &num);

  /*comprobacion*/
    if(num % 2 == 0){

      printf("%d es par", num);

    }else{

      printf("%d es impar", num);

    };

}
