#include<stdio.h>
int main(){
    int a,m;
    printf("Enter your age :\n");
    scanf("%d",&a);
    printf("Enter your marks :\n");
    scanf("%d", &m);
    switch (a)
    {
    case 18:
        printf("Your age is 18 :)\n");
        switch(m)
        {
            case 80:
            printf("Your marks is 80");
            break;

            default:
            printf("your marks is not 80");

        }
        
    break;    
    case 16:
        printf("Your age is 16\n");
        switch (m)
        {
             case 80:
                 printf("your marks is 80");

             break;
    
            default:
                printf("Your marks is not 80");

           
        }
    break;
    default:
        printf("Your age is not 18, 16");
        break;
    }
}