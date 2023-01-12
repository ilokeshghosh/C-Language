#include<stdio.h>
int main(){
    int a,c,Even,Odd;
 
    printf("Enter the number :\n");
    scanf("%d",&a);
    c = (a%2 == 0) ? printf("Number is Even") : printf("Number is Odd");
    return 0;

}