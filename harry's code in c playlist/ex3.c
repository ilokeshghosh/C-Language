#include<stdio.h>
int fib_reccursive(int n){
     int a = 0, b =1,s;
     s = a + b ;
     return s;
    
    
   
}
int fib_iterative(int n ){
    int m = 0;
    m++;

     
    return fib_reccursive(n) +  m ;
    

}

int main() 
{
    int num,d;
    printf("Enter the number you want fibonacci series:\n");
    scanf("%d\n",&num);
    printf("0\n1\n\n");
    while ( 20>num)
    {
        d = fib_iterative(num);
        printf("The fibonacci series of %d is : %d\n",num,d);
        num --; 
    }
    
    
    return 0 ;
}