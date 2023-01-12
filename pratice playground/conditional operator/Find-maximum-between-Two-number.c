#include<stdio.h>
int main(){
    int a,b,m;
    printf("Enter the two number :\n");
    scanf("%d\n%d",&a,&b);
    m = (a > b) ? a : b;
    printf("The maximum between %d and %d is : %d",a,b,m);
    return 0;
}