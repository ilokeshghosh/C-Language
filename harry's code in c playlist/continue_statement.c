#include<stdio.h>
int main(){
    int  a,b,age;
    printf("Enter a number:\n");
    scanf("%d\n",&a);
    for(b=0;b<a;b++){
        printf("%d\n",b);
        if (b==4){
            b+=1;
            continue;
            
        
        }

    }

}