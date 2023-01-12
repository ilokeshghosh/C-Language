#include<stdio.h>
int main(){
    int a=8;
    float b = 7.333;
    printf("The value of b is %0.4f\n",b);
    printf("The value of b is %10.4f\n",b);
    printf("The value of b is %-8.4fthis\n",b);
    printf("The value of b is %-18.4fthis\n",b);
    return 0;
}