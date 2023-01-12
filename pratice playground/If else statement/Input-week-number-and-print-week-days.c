#include<stdio.h>
int main() 
{
    int w;
    printf("Enter the  days number of a week(1-7):\n");
    scanf("%d",&w);
    if(w == 1){
        printf("MONDAY");
    }
    else if(w == 2){
        printf("TUESDAY");
    }
     else if(w == 3){
        printf("WEDNESDAY");
    }
     else if(w == 4){
        printf("THRUSDAY");
    }
     else if(w == 5){
        printf("FRIDAY");
    }
     else if(w == 6){
        printf("SATURDAY");
    }
     else if(w == 7){
        printf("SUNDAY");
    }
    else
    {
        printf("U r fucked up !!!");
    }
    

    return 0 ;
}