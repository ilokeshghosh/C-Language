#include<stdio.h>
int main(){
    int a ,b;
    printf("Enter a number  : \n");
    scanf("%d", &a);
    printf("Enter another number : \n");
    scanf("%d", &b);
    printf("a && b = %d\n", a&&b);
    printf("a || b = %d\n", a||b);
    printf("!(a || b) = %d\n" ,!(a||b));
    return 0;
}