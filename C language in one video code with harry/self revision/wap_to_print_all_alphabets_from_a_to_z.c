#include <stdio.h>
int main()
{

    char c = 'a';
    while ('z' >= c)
    {
        printf("%c\n", c);
        c++;
    }
    return 0;
}