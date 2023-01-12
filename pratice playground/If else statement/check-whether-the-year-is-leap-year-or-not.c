#include<stdio.h>
int main() 
{   
    int y,i = 1;
    while( i = 1){
    printf("Enter the year :\n");
    scanf("%d",&y);
    if(y%4 == 0){
        if(y%100 == 0){
            printf("The year %d is not : leap year\n",y);
        }
        else
        {
            printf("The year %d  is : leap year\n",y);
        }
        
    }
    else if (y%400 == 0)
    {
        printf("This year %d is : leap year \n",y);
    }   
    else
    {
        printf("This year %d is  not : leap year\n",y);
    }
}
    return 0 ;
}