#include <stdio.h>

/*pedir dos numeros y sacar si el primero es multiplo del segundo*/

int main(){

  /*inicializar*/
    int num;
    int num1;

  /*pedir los numeros*/
    printf("introduce los numeros \n");
    scanf("%d %d", &num, &num1);

  /*multiplo*/
    if(num % num1 == 0){

      printf("%d es multiplo de %d \n", num, num1);

    }else{

        printf("%d no es multiplo de %d \n", num, num1);
    }

}
