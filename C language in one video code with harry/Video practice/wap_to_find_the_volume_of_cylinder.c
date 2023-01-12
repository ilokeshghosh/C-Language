#include<stdio.h>
#define pi 2.14
int main() 
{
    float r,h;
    printf("Enter the radius of the cylinder :\n");
    scanf("%f",&r);
    printf("Enter the Height of the cylinder :\n");
    scanf("%f",&h);
    printf("The volume of cylinder is : %.2f",pi*r*r*h);

    printf("");
    return 0 ;
}