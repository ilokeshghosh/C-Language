#include<stdio.h>
int main() 
{
    int y,x;
    printf("Enter the year :\n");
    scanf("%d",&y);
    x = (y%4==0 && y%100 != 0 )||( y%400 == 0 ) ? printf("It is a leap year"): printf("This is not leap year") ;

 

    return 0 ;
}