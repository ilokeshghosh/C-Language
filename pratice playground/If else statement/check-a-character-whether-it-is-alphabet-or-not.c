#include<stdio.h>
int main() 
{   
    char ch;
    printf("Enter the character :\n");
    scanf("%c",&ch);
    if (ch >= 'a' && ch <= 'z'){
        printf("The character %c is alphabet",ch);
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("The character %c is alphabet",ch);
    }
    else
    {
        printf("The character %c  is not alphabet ",ch);
    }
    
    
   
    return 0 ;
}