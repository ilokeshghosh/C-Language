#include <stdio.h>
int main()
{

    float n1, n2, n3, n4, n5, t, p, a;
    printf("PS :- The maximum number of per subject is : 100 \n");
    printf("Enter the marks of the 5 subject cosicutively :\n");
    scanf("%f\n%f\n%f\n%f\n%f", &n1, &n2, &n3, &n4, &n5);
    t = n1 + n2 + n3 + n4 + n5;
    a = t / 2;
    p = (t / 500) * 100;
    printf("The total marks : %.2f\n", t);
    printf("The overall percent of provided marks is : %.2f\n", p);
    printf("The average of the provided marks is :  %.2f\n", a);

    return 0;
}