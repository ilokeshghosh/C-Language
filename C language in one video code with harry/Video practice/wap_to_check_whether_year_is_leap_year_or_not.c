#include <stdio.h>
int main()
{
    int y;
    // 1.If the year is evenly divisible by 4, go to step 2. Otherwise, go to step 5.
    // 2.If the year is evenly divisible by 100, go to step 3. Otherwise, go to step 4.
    // 3.If the year is evenly divisible by 400, go to step 4. Otherwise, go to step 5.
    // 4.The year is a leap year (it has 366 days).
    // 5.The year is not a leap year (it has 365 days).
    printf("Enter the year :\n");
    scanf("%d",&y);
    if (y%4==0)
    {
        if(y%100==0){
              if(y%400==0){
                  printf("%d is leap year\n",y);

              }
              else
              printf("%d is not a leap year\n",y);
            
        }
        else
         printf("%d is leap year\n",y);
    }
    else
    printf("%d is not a leap year\n",y);
    return 0;
}