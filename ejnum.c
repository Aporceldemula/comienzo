
#include <stdio.h>

/*pedir un numero hasta que no sea cero evaluar si es positivo o negativo*/

int main(){

  /*inicializar*/
   int num;

  /*condicion*/
   while(num != 0){

  /*pedir al usuario*/
   printf("introduce un numero \n"); '/home/student/aporcel/Documentos/prog/comienzo/alreves.c' 
   scanf("%d", &num);

       if(num>0){
           printf("%d es positivo \n", num);
       }

       if(num<0){
           printf("%d es negativo \n", num);
       };
  

}
