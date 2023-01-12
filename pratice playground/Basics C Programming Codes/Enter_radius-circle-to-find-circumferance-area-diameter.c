#include<stdio.h>
void main(){
    float r, pi = 3.141;
    printf("Enter the radius of the CIRCLE:\n");
    scanf("%f",&r);
    printf("The diameter of the circle is :\n%.3f\n", 2*r);
    printf("The area of the circle is :\n%.3f\n", pi * (r * r));
    printf("The circumference of the circle is :\n%.3f", 2 * (pi * r));


}