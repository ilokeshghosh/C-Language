#include<stdio.h>
void vote_selection(){
    int a;
    printf("Enter your age:\n");
    scanf("%d",&a);
    if(a<=18){
        printf("You can't vote:\n");    
    }
    else if (a>=18)
    {
        printf("You can vote");
    }
    else
    {
        printf("ERRRORRR !!!!!!!!!!");
    }
    
    
}
int main(){
   
   vote_selection();
    
}