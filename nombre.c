
#include <stdio.h>

int main(){

  /*inicializacion*/
  char nombre[10];
  int i;
  /*condicion*/

  printf("introduce un nombre\n");
 for(i=0;i<=9;i++){
    scanf("%s", &nombre[0]);
 }
 for(i=0;i<=9;i++){
    printf("%c ", nombre[0]);
 }

}
