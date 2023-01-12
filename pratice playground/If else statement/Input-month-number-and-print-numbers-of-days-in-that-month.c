#include<stdio.h>
int main() 
{
    int w;
    printf("Enter the   number of a month (1-12):\n");
    scanf("%d",&w);
    if(w == 1){
        printf("JANUARY");
    }
    else if(w == 2){
        printf("FEBRUARY");
    }
     else if(w == 3){
        printf("MARCH");
    }
     else if(w == 4){
        printf("APRIL");
    }
     else if(w == 5){
        printf("MAY");
    }
     else if(w == 6){
        printf("JUNE");
    }
     else if(w == 7){
        printf("JULY");
    }
     else if(w == 8){
        printf("AUGUST");
    }
     else if(w == 9){
        printf("SEPTEMBER");
    }
     else if(w == 10){
        printf("OCTOBER");
    }
    else if (w== 11)
    {
        printf("NOVEMBER");
    }
    else if (w == 12)
    {
        printf("DECEMBER");
    }
    else
    {
        printf("U r fucked up !!!");
    }
    

    return 0 ;
}