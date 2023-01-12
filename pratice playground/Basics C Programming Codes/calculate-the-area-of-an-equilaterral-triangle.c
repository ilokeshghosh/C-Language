#include<stdio.h>
#include<math.h>
int main(){
    float area, s, p;
    float side;
    printf("Enter the side  :\n");
    scanf("%f",&side);
    s = sqrt(3);
    p = pow(side,2);
    area = (s/4) * (p);
    printf("Area of the equilateral   with %.3f side is triangle is : %.2f",side, area);
     
    

    
}