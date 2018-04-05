
#include <stdio.h>

int main(){

    /*inicializar*/
     char letra;

    /*pedir al usuario*/
     printf("introduce la letra \n");
     scanf("%c", &letra);

     /*evaluacion*/
      switch (letra)
      {
        
          case 'a': printf("es una vocal \n"); break;
          case 'e': printf("es una vocal ");  break;
          case 'i': printf("es una vocal"); break;
          case 'o': printf("es una vocal"); break;
          case 'u': printf("es una vocal"); break;
          case '0': printf("es un numero"); break;
          case '1': printf("es un numero"); break;
          case '2': printf("es un numero"); break;
          case '3': printf("es un numero"); break;
          case '4': printf("es un numero"); break;
          case '5': printf("es un numero"); break;
          case '6': printf("es un numero"); break;
          case '7': printf("es un numero"); break;
          case '8': printf("es un numero"); break;
          case '9': printf("es un numero"); break;
          default: printf("es una consonante");
      };

}
