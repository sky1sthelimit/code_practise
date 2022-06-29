#include <stdio.h>
#include<string.h>

int main(){

   char *s = "SunBeam";
   char *p = s;


   for(int i = 0; i < strlen(p) ; ++i, ++p){
      printf("%c",*p++);
      printf(" %d ",strlen(p));
      
   }

   return 0;
}