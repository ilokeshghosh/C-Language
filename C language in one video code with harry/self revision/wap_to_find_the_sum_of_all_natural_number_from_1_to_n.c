#include <stdio.h>
int main()
{
    int n, sum = 0, z;
    printf("Enter the number from you want add :\n");
    scanf("%d", &n);
    
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    printf("The summation result from 1 to %d is = %d\n",n, sum);

    return 0;
}