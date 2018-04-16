
#include <stdio.h>
 
/*que el usuario introduzca 5 numeros y muestralos al reves*/

int main(){

  /*inicializacion*/
  int num[5];
  int i; 
  /*pedir por pantalla*/
   for(i=0;i<=4;i++){
    printf("introduce un numero\n");
    scanf("%d",&num[i]);
   }
   for(i=4;i>=0;i--){
       printf("%d",num[i]);
   }
   


}
