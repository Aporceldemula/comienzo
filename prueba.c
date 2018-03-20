#include <stdio.h>

main(){

  float f;
  short int i;

  printf("el tamaño de mi float es %d", sizeof f);
  printf("y lo normal para un float es %d", sizeof(float));
  printf("pero un entero corto ocupa %d", sizeof i); 

}
