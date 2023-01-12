#include <stdio.h>
int main()
{
    int n, i = 1;
    printf("Enter the number :\n");
    scanf("%d", &n);
    printf("\n");
    while (i <= n)
    {
        printf("%d \n", n);
        n--;
    }
    return 0;
}