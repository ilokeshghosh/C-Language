#include<stdio.h>
int main(){
    int a;
    printf("Enter your age :\n");
    scanf("%d",&a);
    if(a>=18 & a<=100 )
    {
        printf("You can vote :)");
        

    }
    else if (a>=10 & a<=100)
    {
        printf("You  have to wait for few years to give vote :)");
    }
    else if (a>=100)
    {
        printf("You should die instead of giving vote (:p)");
    }
     
    
    else
    {
        printf("You can't vote :(");
        
    }
    return 0;


}