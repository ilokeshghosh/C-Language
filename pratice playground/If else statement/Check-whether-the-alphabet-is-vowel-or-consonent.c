#include<stdio.h>
int main() 
{   
    char ch;
    
   
    printf("Enter the character :\n");
    scanf("%c",&ch);
    if (ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O'|| ch == 'u' || ch == 'U' )
    {
        printf("The character %c is  :: vowel\n",ch);
    }
    else
    {
        printf("The character %c is :: consonent\n",ch);
    }

    
    
    return 0 ;
}