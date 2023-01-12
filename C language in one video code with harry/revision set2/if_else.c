#include<stdio.h>
int main(){
    int a;
    printf("Enter your age : ");
    scanf("%d",&a);

    if(a<18){
        printf("You can't vote");
    }
    else 
    {
        printf("You can vote");
    }
    

}