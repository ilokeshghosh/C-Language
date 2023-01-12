#include<stdio.h>
int main() 
{
   int a = 0,b = 1,num = 5,s;
   printf("%d\n",a);
   
   for(int i = 0 ; i < num - 2;i ++)
   {
      b = a + b;
      a = b - a;
      s = a + b;
      printf("%d\n%d\n%d\n",b,a,s);

   }
  

   return 0 ;
}