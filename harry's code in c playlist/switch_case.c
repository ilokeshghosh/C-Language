#include<stdio.h>
int main(){
    int a ;
    printf("Enter a number :\n");
    scanf("%d",&a);
    switch (a)
    {

        case 9:
            printf("Age is 9");
            break;

        case 18:
            printf("Age is 18");
            break;
    
        default:
            printf("Age doesn't match");
            break;
    }

}