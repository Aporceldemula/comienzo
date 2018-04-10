
#include <stdio.h>

/*sacar los pares del 26 al 10*/

int main(){

  /*inicializacion*/
    int num=26;

  /*condicion*/
    do{
      if(num%2==0){
          printf("%d \n", num);
      }num--;
    }while(num>=10);


}
