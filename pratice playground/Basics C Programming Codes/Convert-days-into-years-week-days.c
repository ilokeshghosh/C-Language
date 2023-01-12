#include<stdio.h>
int main() 
{
    int days,weeks,years,d;
    printf("Enter days:\n");
    scanf("%d",&d);
    days = d;
    years = days / 365;
    printf("%d years\n", years);
    days = days - (years * 365);
    
    weeks = days / 7;
    printf("%d weeks\n", weeks);
    days = days - (weeks * 7);

    days = d - ((years * 365) + (weeks * 7));
    printf("%d days",days);
    return 0 ;
}