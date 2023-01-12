#include<stdio.h>
int main(){
    
    float a1,a2,a3,n = 1;
    while( n == 1){
    printf("Enter the value of 1st angle 0 to quit the loop\n");
    printf("Enter the 1st angle of the triangle:");
    scanf("%f",&a1);
    if (a1 == 0)
    {
        break;
    }
    
    printf("Enter the 2nd angle of the triangle: ");
    scanf("%f",&a2);
    a3 = 180 - (a1 + a2);
    printf("The angle of the 3rd of the triangle is :%.3f\n\n\n",a3);
    
    }
return 0;

}