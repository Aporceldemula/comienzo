
#include <stdio.h>

/*programa con operador condicional que pida un numero si es positivo se muestra tal cual si es negativo se cambia de signo*/

int main(){

  /*inicializacion*/
   int num;
  
  /*introduccion de valores*/
   printf("introduce un numero \n");
   scanf("%d", &num );

  /*resultado*/
   (num>0) ? printf("numero positivo %d \n", num) : printf("el numero es negativo %d \n", (unsigned) num);
}
