#include<stdio.h>
int main() 
{
    char ch;
    printf("Enter the character :\n");
    scanf("%c",&ch);
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        printf("The character %c is :: alphabet\n",ch);
    }
    else if (ch>= '0' && ch<= '9')
    {
        printf("The character %c is  :: digit\n",ch);
    }
    else
    {
        printf("The character %c is :: special character\n",ch);
    }
    
    
    
   
    return 0 ;
}