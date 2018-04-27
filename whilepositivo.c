
#include <stdio.h>



int main(){

  /*inicializacion*/
  int num;

  
  do{

  printf("introduce un numero\n");
  scanf("%d",&num);
  if (num>0){
      printf("es positivo\n");
  }
  else if(num<0){
      printf("es negativo\n");
  }
  }while(num!=0);
   


}
