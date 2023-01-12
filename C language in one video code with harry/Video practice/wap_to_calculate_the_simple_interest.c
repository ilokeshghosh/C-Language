#include<stdio.h>
int main() 
{
    float p,r,t;
    printf("Enter the priciple amount :\n");
     scanf("%f",&p);
    printf("Enter the Rate of interest :\n");
     scanf("%f",&r);
    printf("Enter the time :\n");
     scanf("%f",&t);
     printf("The simple ineterest  is : %2f",(p*r*t)/100);
    return 0 ;
}