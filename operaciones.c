#include <stdio.h>

/*realiza las siguientes operaciones*/

int main(){

    /*inicializar las variables*/
     int a=5;
     int b;
     int c;

    /*calculos*/
     b=++a; /*6*/
     printf("b=%d \n", b); /*imprimo aqui porque luego cambiara el valor*/
     c=a++; /*6*/
     b=b*5; /*30*/
     a=a*2; /*14*/ /*se guardan los incrementos de a*/

     /*imprimo por pantalla*/
      printf("los resultados son b=%d, c=%d, a=%d \n", b, c, a);
}
