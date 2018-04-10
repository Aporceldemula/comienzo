
#include <stdio.h>

/*hacer que el usuario introduzca usuario y contraseña correctamente*/

int main(){

  /*inicializacion*/
    int usuario=1024;
    int contrasena=4567;

  /*condicion*/
    do{
    printf("introduce usuario \n");
    scanf("%d", &usuario);

    printf("introduce contraseña \n");
    scanf("%d", &contrasena);
    }while((usuario!=1024)&&(contrasena!=4567));


}
