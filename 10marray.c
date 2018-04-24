
#include <stdio.h>

/*pide al usuario 10 numeros calcula la media y muestra los que estan por encima de la media*/

int main(){

  /*inicializacion*/
  int numeros[10];
  int i;
  int suma=0;
  int media=0;
  /*pedir al usuario*/
  printf("introduce los numeros");

  for(i=0;i<=9;i++){
    scanf("%d", &numeros[i]);
    suma=suma+numeros[i];
  }

  media=suma/10;
  printf("la media es %d\n",media);

   for(i=0;i<=9;i++){
       if(numeros[i]>media){
       printf("mayor que la media %d\n", numeros[i]);
       }
    }

}
