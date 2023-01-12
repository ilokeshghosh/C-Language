#include<stdio.h>
int main(){
    float b,h,a;
    printf("Enter the height of the triangle: ");
    scanf("%f",&h);
    printf("Enter the base of the triangle:  ");
    scanf("%f",&b);
    a =  (b/2 * h);
    printf("The area of the triangle is : %.3f", a);
    return 0;
}