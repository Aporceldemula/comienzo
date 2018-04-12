
#include <stdio.h>

/*programa que imprima de la Z a la A*/



int main(){

  /*inicializacion*/
  int i; 
  char letra=65;  //tanto si pones la letra como su valor ascii 
  /*condicion*/
  for(i=1;i<=26;i++){
    printf("%c ", letra);
    letra++;
  }


}
