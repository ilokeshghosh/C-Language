#include<stdio.h>
int main() 
{
    char ch;
    printf("Enter the character :\n");
    scanf("%c",&ch);
    if (ch >= 'a' && ch <= 'z')
    {
        printf("%c is lower case",ch);
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("%c is upper case",ch);
    }
    else
    {
        printf("Errrorrrrr! and u have been fucked up . LOL !!!\n\n");
    }
    
    
    
    
    return 0 ;
}