#include<stdio.h>
int main(){
    int a,b=0;
    printf("Enter a number:\n");
    scanf("%d",&a);
    do{
        printf("%d\n",b+1);
        b++;
    }while(b<a);
    return 0;
}