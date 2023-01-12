#include<stdio.h>
int main() 
{
    char a = '4';
    char *ptr = &a;
    printf("%d\n",ptr);
    ptr++;
    printf("%d\n",ptr);
    printf("%d\n\n",ptr - 1);

    printf("%p\n",ptr);
    ptr --;
    printf("%p\n",ptr);
    printf("%p",ptr + 1);
    
    return 0 ;
}