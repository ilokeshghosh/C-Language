#include <stdio.h>
int main()
{
    float c;
    printf("Enter the temperature in celcuis : \n");
    scanf("%f", &c);
    printf("The user given temprature in fahrenheit is : %.2f", c + 33.8);
    return 0;
}