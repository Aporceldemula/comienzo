#include <stdio.h>

/*division de dos numeros decimales de hasta 8 cifras utilizando tres cifras decimales*/

int main(){

  /*inicializacion*/
    float num;
    float num1;

  /*tntroduccion de valores*/
    printf("introduce el primer valor \n");
    scanf("%8f", &num);
    printf("introduce el segundo valor \n");
    scanf("%8f", &num1);

  /*division*/
   float div=num/num1;
       printf("el resultado de dividir %f/%f=%.3f \n", num, num1, div);
}
