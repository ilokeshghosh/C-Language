#include<stdio.h>
int sum(int a, int b){
    
    return a + b;
}
int main(){
    int a = 8,c;
    int b = 92;
    c = sum(a,b);
    printf("The sum is :\n%d",c);
}