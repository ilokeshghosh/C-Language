#include<stdio.h>
int main() 
{
    int p,c,m;
    float per;
    printf("Enter the number of phycics,chemistry,math respectively :\n");
    scanf("%d  %d %d",&p,&c,&m);
    per = (p+c+m)/3.0;
    printf("Total percentage is : %.2f \n",per);

    if (per>=40)
    {
        if (p>=33 && c>=33 && m>=33)
        {
         printf("Your have passed in total subject as well as in each subject \n");   
        }
        else
        printf("Your have passed in total subject but failed in  each subject \n");
        
    }
    else
    printf("Your have failed in total subject as well as in each subject \n"); 
    
    return 0 ;
}