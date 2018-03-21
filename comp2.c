#include <stdio.h>

/*pedir dos numeros al usuario y sacar cual es el mayor*/

int main(){

 /*inicializar*/
  int num;
  int num1;

 /*pedir los numeros*/
  printf("introduce los numeros \n");
  scanf("%d %d", &num, &num1);

 /*comparar*/
  if(num<num1){

    printf("%d es mayor \n", num1);

  }else
      if(num>num1){

        printf("%d es mayor \n", num);

      }else{

          printf("son iguales \n");
      }



}
