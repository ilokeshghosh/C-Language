#include<stdio.h>
int main(){
    int a,b,c,m,n,o;
    printf("Enter 3 number consicutively :\n");
    scanf("%d\n%d\n%d",&a,&b,&c); 
    m = (a > b && a > c) ? a:(b > c) ? b:c;
    printf("maximum number between %d,%d and %d is : %d",a,b,c,m);
    return 0;
}