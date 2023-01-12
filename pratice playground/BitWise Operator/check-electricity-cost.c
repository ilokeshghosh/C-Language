#include<stdio.h>
int power(){
    float e,p,t;
    printf("Enter the power:");
    scanf("%f",&p);
    printf("Enter time in hrs :\n");
    scanf("%f",&t);
    e = (p*t);
    return e;
}
int cost(){
    float p,u,t;//p=cost,u=1unit cost,t=time
    printf("Enter price of 1 unit :\n");
    scanf("%f",&u);
    printf("Enter time in hours:");
    scanf("%f",&t);
    p = (power() * t)/1000;
    return p;
}
int main(){
    printf("The consumed current is :%f",power());
    printf("The price consumed is : %f",cost());
    return 0;


    
}