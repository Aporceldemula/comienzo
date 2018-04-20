
#include <stdio.h>

/*pide al usuario 10 numeros calcula la media y muestra los que estan por encima de la media*/

int main(){

  /*inicializacion*/
  int numeros[10];
  int i;
  int suma;

  /*pedir al usuario*/
  printf("introduce los numeros");

  for(i=0;i<=9;i++){
    scanf("%d", &numeros[i]);
    suma=suma+numeros[i];
  }

  int media=suma/10;
  printf("%d",media);

   for(i=0;i<=9;i++){
       if(numeros[i]>media){
       printf("mayor que la media %d\n", numeros[i]);
       }
    }

}
