
#include <stdio.h>

/*programa que almacene el numero de dias que tiene cada mes pida que se le indique el mes y muestr el numero de dias que tiene ese mes*/

int main(){

  /*inicializacion*/
  int diaMes[12]={31,31,30,28,30,31,30,31,30,31,30};
  int numMes;
  /*condicion*/
  printf("introduce un mes\n");
  scanf("%i",&numMes); 
  switch(numMes){
    case 1: printf("dias:%d\n",diaMes[0]);break;
    case 2: printf("dias:%d\n",diaMes[1]);break;
    case 3: printf("dias:%d\n",diaMes[2]);break;
    case 4: printf("dias:%d\n",diaMes[3]);break;
    case 5: printf("dias:%d\n",diaMes[4]);break;
    case 6: printf("dias:%d\n",diaMes[5]);break;
    case 7: printf("dias:%d\n",diaMes[6]);break;
    case 8: printf("dias:%d\n",diaMes[7]);break;
    case 9: printf("dias:%d\n",diaMes[8]);break;
    case 10: printf("dias:%d\n",diaMes[9]);break;
    case 11: printf("dias:%d\n",diaMes[10]);break;
    case 12: printf("dias:%d\n",diaMes[11]);break;
}

}
