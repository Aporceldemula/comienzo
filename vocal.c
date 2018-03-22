#include <stdio.h>

/*pedir una letra y decir si es vocal*/

int main(){

  /*inicializar*/
    char letra;

  /*pedir por pantalla*/
    printf("introduce una letra \n");
    scanf("%c", &letra );

  /*evaluacion*/
    if((letra == 'a')||(letra == 'e')||(letra == 'i')||(letra == 'o')||(letra == 'u')){

      printf("es una vocal \n");

    }else{

      printf("no es una vocal \n");

    }
        

}
