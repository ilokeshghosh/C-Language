#include<stdio.h>
int main() 
{
    int n;
    printf("Enter the number of which you want multiplication table of :\n");
    scanf("%d",&n);
    for (int i = 1; i<=10; i++)
    {
        printf("%d X %d = %d\n",i,n,i*n);
    }
    

    return 0 ;
}