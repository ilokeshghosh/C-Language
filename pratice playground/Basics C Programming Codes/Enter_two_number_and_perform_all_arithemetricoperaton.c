#include<stdio.h>
void main(){
    float a,b;
    printf("Enter two number with which you want to perform arithemetric operation :\n");
    scanf("%f\n%f",&a,&b);
    printf("The summation of the user input number is :\n%.3f\n", a + b);
    printf("The subtraction of the user inputed number is :\n%.3f\n", a - b);
    printf("The muliplication of the user inputed number is :\n%.3f\n", a * b);
    printf("The division of user inputed number is :\n%.3f\n", a / b);
}