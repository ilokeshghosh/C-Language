#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a number:\n");
    scanf("%d",&a);
    for (b=0;b<a;b++){
        printf("%d\n",b);
        if(b>=5){
            break;
        }
    }
}