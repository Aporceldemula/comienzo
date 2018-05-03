
#include <stdio.h>
#include <string.h>
int main(){

  /*inicializacion*/
   char usuario[10]="pedro";
   char contrasena[10]="peter";

   char usuariointro[10];
   char contrasenaintro[10];
  /*condicion*/
   do{

       printf("introduce usuario\n");
       scanf("%s", usuariointro);
       printf("introduce contraseña\n");
       scanf("%s", contrasenaintro);
   }while( (strcmp(usuario,usuariointro)!=0) && (strcmp(contrasena,contrasenaintro)!=0) );


}
