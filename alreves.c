

#include <stdio.h>

/*el usuario teclea cuatro letras y se muestran en pantalla juntas pero en orden inversoy entre comillas dobles*/

int main(){

  /*declarar las variables*/
    char letra;
    char letra1;
    char letra2;
    char letra3;

  /*pedir al usuario*/
    printf("introduce la primera letra \n");
    scanf("%c", &letra);

    printf("introduce la segunda \n");
    scanf("%c", &letra1);

    printf("introduce la tercera \n");
    scanf("%c", &letra2);

    printf("introduce la primera letra \n");
    scanf("%c", &letra3);

  /*imprimo*/
    printf(" \" %c %c %c %c \" ", letra3, letra2, letra1, letra);

    
  /*segunda manera*/ /* \r vuelve al principio de linea*/


    printf(" \" %c \r %c \r %c \r %c \" ", letra, letra1, letra2, letra3);
};
