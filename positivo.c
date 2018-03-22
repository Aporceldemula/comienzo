
#include <stdio.h>

int main(){

  /*inicializar*/
    int num;
    int num1;

  /*pedir por pantalla*/
    printf("introduce los valores \n");
    scanf("%d %d", &num, &num1);

  /*evaluacion*/
    if( ((num>0)||(num1<0))||((num<0||num1>0))){

        printf("uno de los numeros es positivo \n");

    }else
      if((num>0)&&(num1>0)){

      printf("los dos son positivos \n");

    }else
      if((num<0)&&(num1<0)){

      printf("ninguno de los dos es positivo \n");

    }
 }
