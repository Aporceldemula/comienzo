
#include <stdio.h>


int main(){

/*inicializacion de variables*/
   int factor1;
   int factor2;

/*introduccion de datos*/
    printf("introduzca el primer numero \n");
    scanf("%d", &factor1);
    printf("introduce el segundo numero \n");
    scanf("%d", &factor2);
    int producto=factor1*factor2; /*la inicializamos aqui porque los valores han sido introducidos ahora por el usuario*/

/*salida*/
    printf("el resultado de multiplicar %d x %d es: %d \n", factor1, factor2, producto);
}
