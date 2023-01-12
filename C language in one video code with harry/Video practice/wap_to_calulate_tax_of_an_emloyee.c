#include<stdio.h>
int main() 
{
    float i,t,per;
    printf("Enter the income: \n");
    scanf("%f",&i);
    if(i<250000)
    {
        printf("No tax needed");
    }
    else if(250000<=i<500000){

        per= (5*i)/100;
        printf("Your tax is : %.2f \n",per);

    }
    else if(500000<=i<1000000){

        per= (20/100)/i;
        printf("Your tax is : %.2f  \n",per);

    }
    else if(1000000<=i){

        per=  (30*i)/100;
        printf("Your tax is : %.2f \n",per);

    }
    else
    printf("Error");

    return 0 ;
}