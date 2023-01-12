#include<stdio.h>
int main() 
{
    int n,sum=0;
    printf("Enter the number :\n");
    scanf("%d",&n);

    while(n!=0)
    {
        sum+= n%10;

        n/=10;
    }
    printf("The summation of all digit of %d is : %d\n",);
    return 0 ;
}