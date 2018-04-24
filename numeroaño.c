
#include <stdio.h>

/*almacena el numero de dias que tiene cada mes y pide al usuario que indique un mes y un dia y diga que numero de dia es dentro del año*/

int main(){

  /*inicializacion*/
  int NumDia[13]={0,31,28,30,30,31,30,31,31,30,31,30,31};
  int mes;
  int dia;
  int SumDias=0;
  int i;
  int total;

  /*pedir al usuario*/
  printf("introduce el mes");
  scanf("%d",&mes);
  printf("introduce el dia");
  scanf("%d",&dia);

    for(i=1;i<mes;i++){
     SumDias=SumDias+NumDia[i];
    }
  printf("%d\n", SumDias);

    total=SumDias+dia; //si no creo la variable total no me coje la suma de las variables
    printf("numero de dia en cuanto al año%d\n", total);

}
