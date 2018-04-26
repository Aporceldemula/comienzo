#include <string.h>
#include <stdio.h>

int main(){

  /*inicializacion*/
    char texto[10];
    char texto2[10];

  /*pedir*/
    printf("introduce una palabra\n");
    gets(texto);

    printf("introduce una palabra\n");
    gets(texto2);
    strcat(texto,texto2);
    puts(texto);
  
    printf("introduce una palabra\n");
    gets(texto);

    strcpy(texto2,texto);
    puts(texto);
    puts(texto2);
}
