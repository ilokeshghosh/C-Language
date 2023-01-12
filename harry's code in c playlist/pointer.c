#include<stdio.h>
int main(){
    int a=64;
    int *ptr = &a;
    printf("The adress of a is :%p\n",&a);
    printf("The adress of a is :%x\n",ptr);
    printf("The value of a is:%d\n",*ptr);
    printf("The value of a is :%d\n",a);
    printf("The adress of ptr is :%p\n",&ptr);
    printf("The value of ptr is :%d\n",ptr);
    return 0;
    
    }