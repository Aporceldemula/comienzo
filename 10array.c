
#include <stdio.h>

/*introduce 10 numeros y que salgan la reves de como han sido introducidos*/

int main(){
int i;
  /*inicializacion*/
    int numeros[10]; 
  /*introduce los numeros*/
    printf("introduce 10 numeros");
    for(i=0;i<10;i++){
    scanf("%d", &numeros[i]);
    }
    for(i=9;i>=0;i--){
        printf("%d",numeros[i]);

    }
}
