#include<stdio.h>
int main(){
    int a,n=10;
    printf("Enter the number you want multiplication table of:: ");
    scanf("%d",&a);
    for (int i = 1; i<=10; i++)
    {
        printf("%d X %d = %d \n",a,i,a*i);
    }
    
}