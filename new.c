#include <stdio.h>

 void foo()
 {
   here:
    goto display;
 }


int main()
{
   int i = 4;


   if(i ==4){
       goto here;
   }
   return 0;
}