#include<stdio.h>
int adding(){
    int a,b;
    printf("Enter two  numbers:\n");
    scanf("%d\n%d",&a,&b);
    return a + b;
}
int main(){
    int c;
    c  = adding();
    printf("The addition of two user given number is :\n%d", c);
    return 0;




}