#include <stdio.h>

void main()

{

int i,n,sum=0,a;

float avg;

printf("Input the  numbers of digit you want to input : \n");
scanf("%d",&a);

for (i=1;i<=a;i++)

{

printf("Number-%d :",i);

scanf("%d",&n);

sum +=n;

}

avg=sum/a;

printf("The sum of %d no is : %d\nThe Average is : %f\n",a,sum,avg);

}

