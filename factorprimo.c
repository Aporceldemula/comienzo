
#include <stdio.h>

int main(){

  /*inicializacion*/
  int num;
  int cont=1;
  
  /*pedir al usuario*/
   printf("introduce un numero\n");
   scanf("%d", &num);

  /*condicion*/
  
   while((num!=0)||(num!=1)); //comprobar si se puede descomponer mas
       if(num%cont==0){ //descomponer
         num=num/cont;
         printf("%d", num);
       }
      // cont++;
     
    }
   




