#include <stdio.h>
int main(){

    int a;
    printf("Enter a number between 1 and 5 :\n");
    scanf("%d",&a);

   

        switch(a){
            case 1:
            printf("you have entered 1");
            break;
            case 2:
            printf("you have entered 2");
            break;
            case 3:
            printf("you have entered 3");
            break;
            case 4:
            printf("you have entered 4");
            break;
            case 5:
            printf("you have entered 5");
            break;

            default:
            printf("You have entered wrong input ");
        }
        
   

}