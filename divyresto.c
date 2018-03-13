#include <stdio.h>

/*calcula la division y el resto dados dos numeros*/
int main(){

    /*inicializacion variables*/
    int num1;
    int num2;

   /*introduccion de datos*/

    printf("introduce los numeros \n");
    scanf("%d %d", &num1, &num2 );

   /*calculos*/
    
    int div=num1/num2;
    printf("%d / %d = %d \n", num1, num2, div );

    int resto=num1%num2;
    printf("%d moduulo %d = %d \n", num1, num2, resto);

}
