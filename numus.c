#include <stdio.h>


int main(){

/*inicializacion de variables*/
   int factor1;
   int factor2;
   int producto=factor1*factor2;/*al estar declarada antes que sean introducidos los valores de factor 1 y 2 el resultado dara siempre cero ya que cuando producto es declarado no tienen valor*/

/*introduccion de datos*/
    printf("introduzca el primer numero \n");
    scanf("%d", &factor1);
    printf("introduce el segundo numero \n");
    scanf("%d", &factor2);

/*salida*/
    printf("el resultado de multiplicar %d x %d es: %d \n", factor1, factor2, producto);
}
