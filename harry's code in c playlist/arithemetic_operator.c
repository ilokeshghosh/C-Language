#include<stdio.h>
int main(){
    int a;
    float b;
    printf("Enter a number: \n");
    scanf("%d", &a);
    printf("Enter a another number: \n");
    scanf("%f", &b);
    printf("The adding of the user given number is = %f\n", a+b );
    printf("The subtarction of the user given numbers is = %f\n", a-b);
    printf("The multiplication of the user given numbers is = %f\n", a*b);
    printf("The division of the user given numbers is = %f\n", a/b);
    return 0;

}