
#include <stdio.h>

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
   for(i=0;i<=9;i++){
       printf("%d\n", numeros[i]);

   }
  int media=suma/10;
  printf("%d",media);

}
