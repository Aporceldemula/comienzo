
#include <stdio.h>
#define n 9

/*el usuario debe adivinar un numero de 1 al 100 en 6 intentos con pistas*/

int main(){

  /*inicializacion*/
   int num;
   int i;
  /*condicion*/
   for(i=1;i<=6;i++){
    printf("adivina el numero\n");
    scanf("%d",&num);
    if (num<n){
        printf("el numero es mayor\n");
    }
    else if (num>n){
        printf("el numero es menor\n");
    }else if(num==n){
        printf("correcto");break;
    }
   


 /*  for(i=1;i<=6;i++){
    printf("adivina el numero\n");
    scanf("%d",&num);
    switch (num)
     case num<n:
        printf("el numero es mayor\n");

     case num>n:
        printf("el numero es menor\n");
     case num==n:
        printf("correcto");*/
    
}
}
