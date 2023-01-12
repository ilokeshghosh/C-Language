#include<stdio.h>
int main()
{
    int a,b=1,c;
    printf("Enter the number you want multiplication table :\n");
    scanf("%d",a);
    printf("The table of %d is :\n",a);
    while(b<=10)
    {
        c = a*b;
        printf("%d X %d = %d\n",a,b,c);
        b++;
        return 0;
    }
}