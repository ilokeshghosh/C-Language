#include<stdio.h>
int main() 
{
    int a=1;
    while (a<=100)
    {
       if (a%2==0)
       {
           printf("%d is even number between 1 and 100\n",a);
           
       }
       a++;
    }
    
    return 0 ;
}