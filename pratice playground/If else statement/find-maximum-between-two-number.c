#include <stdio.h>
int main()
{
    float a, b;
    printf("Enter two number consicutively :\n");
    scanf("%f\n%f", &a, &b);
    if (a > b)
    {

        printf("%-.2f(a) is greater than %-.2f(b)", a, b);
    }
    else if (b>a)
    {
        printf("%-.2f(b) is greater than %-.2f(a)", b, a);
    }
    else
    {
        printf("ERRORR!!!!!!!!!!");
    }
    

    return 0;
}