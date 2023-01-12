#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number  :\n");
    scanf("%d", &a);
    do
    {
        a += 1;
        printf("%d\n",a);
    } while (a<0);

    return 0;
}