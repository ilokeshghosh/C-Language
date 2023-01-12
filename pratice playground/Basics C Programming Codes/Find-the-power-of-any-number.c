#include<stdio.h>
#include<math.h>
int main() 
{
    int a,b,p;
    printf("Enter the base(a) of the number: ");
    scanf("%d",&a);
    printf("Enter the exponention(b) of the number: ");
    scanf("%d",&b);
    
    p = pow(a,b);
    printf("The value of a ^ b is : %d",p);
    
    return 0 ;
}