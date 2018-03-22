#include <stdio.h>

/*dividir dos numeros reales pasados por pantalla, si el segundo es 0 mensaje "error: no se puede dividir entre cero"*/

int main(){

  /*inicializar*/
    float num;
    float num1;

  /*pedir por pantalla*/
    printf("introduce los numeros \n");
    scanf("%f %f", &num, &num1);

  /*operacion*/
    if (num1!=0){

      float resul=num/num1;
      printf("%f / %f = %f \n", num, num1, resul );

    }else
    {
        printf("error: no se puede dividir entre cero \n");
    }
}
