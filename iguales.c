
#include <stdio.h>

int main(){

    /*inicializo*/
    float num; 
    float num2;
    int iguales;

    /*pedir al usuario*/
     printf("introduce un numero \n");
     scanf("%f %f", &num, &num2);

    /*condicion*/
     (num==num2) ? (iguales=1) : (iguales=0);

     printf("%d", iguales);

}
