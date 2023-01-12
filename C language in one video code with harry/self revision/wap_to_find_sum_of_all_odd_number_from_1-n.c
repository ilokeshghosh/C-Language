#include <stdio.h>
int main()
{
    int n, sum;
    printf("Enter the number :\n");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    printf("The summation of all odd number between 1 to %d is = %d\n", n, sum);
    return 0;
}