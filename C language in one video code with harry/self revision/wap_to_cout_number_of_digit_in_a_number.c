#include <stdio.h>
int main()
{
    int n, c = 0,a,b; 
    printf("enter the number :\n");
    scanf("%d", &n);

    while (n!= 0)
    {
        c++;
        n/= 10;
    }
    printf("The user given number  contains = %d",c);
    return 0;
}