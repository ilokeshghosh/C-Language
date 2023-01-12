#include<stdio.h>
int main() 
{
    char ch;
    printf("Enter the character :\n");
    scanf("%c",&ch);
    (ch>= 'a' && ch <= 'z') || (ch>='A' && ch <= 'Z') ? printf("This is alphabet") : printf("Thi is not alphabet");
    return 0 ;
}