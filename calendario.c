
#include <stdio.h>

int main(){

  /*inicializacion*/
  int meses[12]={31,31,30,28,30,31,30,31,30,31,30};
 char mes[12]={"enero","febrero","marzo","abril","mayo","junio","septiembre","octubre", "noviembre","diciembre"};
  /*condicion*/
  printf("introduce un mes\n");
  scanf("%s",&mes); 
  switch(mes){
    case mes[0]: printf("dias:%d\n", meses[0]);
    case mes[1]: printf("dias:%d\n", meses[1]);
    case mes[2]: printf("dias:%d\n",meses[2]);
    case mes[3]: printf("dias:%d\n",meses[3]);
    case mes[4]: printf("dias:%d\n",meses[4]);
    case mes[5]: printf("dias:%d\n",meses[5]);
    case mes[6]: printf("dias:%d\n",meses[6]);
    case mes[7]: printf("dias:%d\n",meses[7]);
    case mes[8]: printf("dias:%d\n",meses[8]);
    case mes[9]: printf("dias:%d\n",meses[9]);
    case mes[10]: printf("dias:%d\n",meses[10]);
    case mes[11]: printf("dias:%d\n",meses[11]);
}

}
