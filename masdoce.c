#include <stdio.h>

/*sumar 12 a todas las variables con el formato abrevido*/

int main(){

  /*inicializar variables*/
    int num=15;
    int num1=-10;
    int num2=214;

  /*abreviado*/
    num+=12;   /*se pone += y no =+ porque sino borra el valor de la variable y pone el 12*/
    num1+=12;
    num2+=12;

  /*sacar por pantalla*/
    printf("valores iniciales= 15, -10, 214 \n valores finales = valores iniciales+12 %d %d %d \n", num, num1, num2 );

}
