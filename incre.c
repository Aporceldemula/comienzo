#include <stdio.h>

/*crear tres variables con los valores 15, -10,2.147.483.647*/

int main(){

    /*INICIALIZACION*/
     int num=15;
     int num1=10;
     int num2=2147483647;

     /*Incremento*/
      num++;
      num1++;
      num2++; /*debera dar error ya que el valor de num2 es el valor limite*/

     /*salida por pantalla*/
      printf("%d %d %d \n", num, num1, num2);
}
