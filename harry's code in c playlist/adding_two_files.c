#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a number\n");
    scanf("%d", &a);
    printf("Enter another number\n");
    scanf(" %d", &b);
    printf("The sum is  %d\n" , a + b);
    return 0;
}