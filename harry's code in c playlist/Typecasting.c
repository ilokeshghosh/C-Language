#include<stdio.h>
int main(){
    int a = 3;
    float b= (float)23/5, c=5.56;
    printf("The value of a in integer is :  \n%d\n",a);
    printf("The value of a in float is :\n%f\n",(float)a);
    printf("The value of b in integer after converting 23 in float is :\n%d\n",(int)b);
    printf("The value of b in float after converting 23 in float is :\n%f\n",b);
    printf("The value of c in integer:\n%d",(int)c);
    return 0;
}