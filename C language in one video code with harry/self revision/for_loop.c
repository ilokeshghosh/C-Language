#include<stdio.h>
int main() 
{
    int a;
    char b[50];
    printf("Enter the line you want to print :\n");
    gets(b);
    printf("Enter the number of time you :\n");
    scanf("%d",&a);
    for (int i = 0; i < a; i++)
    {
        printf("%s\n",b);
    }
    
    return 0 ;
}