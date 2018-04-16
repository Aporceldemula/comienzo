

#include <stdio.h>
 
/*que el usuario introduzca 5 numeros y muestralos al reves*/

int main(){

  /*inicializacion*/
  int num[10];
  int i;
  int mayor=0; 
  /*pedir por pantalla*/
   for(i=0;i<=9;i++){
    printf("introduce un numero\n");
    scanf("%d",&num[i]);
   }
   for(i=0;i<=9;i++){
      if(num[i]>mayor){
          mayor=num[i];
      }
   }

      printf("%d",mayor);

}
