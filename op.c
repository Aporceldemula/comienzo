#include <stdio.h>

int main(){

    /*realizar (a+b)*(a-b) y a²-b² siendo a y b numeros introducidos por el usuario*/
    
   /*inicializar variables*/

    int num1;
    int num2;

   /*introduccion de datos*/

    printf("introduce dos numeros \n");
    scanf("%d %d", &num1, &num2);

   /*operaciones*/

    int op1=(num1+num2)*(num1-num2);
    printf("(%d+%d)x(%d-%d)=%d \n", num1, num2, num1, num2, op1);

    int op2=num1*num1-num2*num2;
    printf("%d²-%d²=%d \n", num1, num2, op2);
}
