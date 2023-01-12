#include<stdio.h>
void main(){
    float len,bre;
    printf("Enter the length of the rectangle :\n");
    scanf("%f",&len);
    printf("Enter the breadth of the rectangle :\n");
    scanf("%f",&bre);
    printf("The perimeter of the rectangle is :\n%.3f\n",2*(len + bre));
    printf("The area of the rectangle is :\n%.3f", len * bre);



}