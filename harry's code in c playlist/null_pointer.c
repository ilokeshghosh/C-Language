#include<stdio.h>
int main(){
    int a = 56;
    int *ptr1 = &a;
    int *ptr2 = NULL;
    printf("The adress of a is : %p\n",ptr1);
    printf("The adress  of some garbage is: %p ",ptr2);
    return 0;

}