#include<stdio.h>
int main() 
{
    int a;
    printf("Enter the number :\n");
    scanf("%d",&a);
    if (a%5 == 0){
        if(a%11 == 0){
            printf("The number %d is divisible by 5 and 11 both ",a);
        }
        else
        {
            printf("The number %d is divisible by 5 but not divisible 11 ",a);
        }
    }
    else
    {
        if (a%11 == 0)
        {
            printf("The number %d is divisible by 11 but not divisible by 5 ",a);
        }
        else
        {
            printf("The number %d is not divisible by 11 and not divisible by 5",a);
        }
        
        
    }
    
    return 0 ;
}