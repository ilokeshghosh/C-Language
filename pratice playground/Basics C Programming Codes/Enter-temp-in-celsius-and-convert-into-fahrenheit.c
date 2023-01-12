#include <stdio.h>
void main()
{
    float c, f;
    printf("Enter temperature  in celsius:\n");
    scanf("%f", &c);
    printf("The temperature in fahrenheit is :%.3f\n", (c * 9 / 5) + 32);
    printf("Enter the teperature in fahrenheit :\n");
    scanf("%f", &f);
    printf("The temperature in celsius is :%.3f ",(f - 32)* 5 / 9 );
}