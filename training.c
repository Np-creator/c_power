#include <stdio.h>

int intervall(int x, int y){
   while (x<y)
   {
       x+=2 * 10 ;
       printf("%d\n", x);
       x++;
   }
   
}

int main (){
   intervall(10,60);
   return 0;
}