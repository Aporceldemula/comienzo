
#include <stdio.h>

/*hacer la media de 5 numeros guardados en un array*/

int main(){

  /*inicializacion*/
  float num[4];
  int i;
  /*condicion*/
   for(i=0;i<=3;i++){
       printf("introduce un numero\n");
       scanf("%f",&num[i]);

   }
   float media=(num[0]+num[1]+num[2]+num[3])/4;
   printf("%f",media);
   

}
