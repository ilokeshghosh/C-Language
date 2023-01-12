#include<stdio.h>
#include <ctype.h>
int main() 
{
    char c;
    printf("Enter the character :\n");
    scanf("%c",&c);
    
    if(isupper(c))
    {
        printf("%c is Upper case",c);
    }
    else if(islower(c)){
        printf("%c is lowercase",c);

    }

    return 0 ;
}