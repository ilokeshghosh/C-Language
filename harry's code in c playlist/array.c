#include <stdio.h>
int main()
{
    int marks[4], a, b;
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the value of %d element of array\n ", i);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("marks[%d] = %d\n", i, marks[i]);
    }
}
