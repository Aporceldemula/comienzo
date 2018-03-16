#include <stdio.h>

/*realiza las siguientes operaciones:
 a=5, b=a+2, b-=3, c=-3, c*=2, ++c, a*=b */

int main(){

  /*inicializacion y declaracion*/
   int a=5;
   int b;
   int c=-3; /*si el signo esta delante del igual es una operacion abreviada              si esta detras es el signo del valor*/
  /*operaciones*/
   printf("a=%d \n", a);
   b=a+2;
   printf("b=a+2 \n b=%d \n", b);
   b-=3;
   printf("b=b-3 \n b=%d \n", b);
   c*=2;
   printf("c=cx2 \n c=%d \n", c);
   ++c;
   printf("c=c+1 \n c=%d \n", c);
   a*=b;
   printf("a=axb \n a=%d \n", a);

}
