#include<stdio.h>
int recur(int a){

    if(a==0 || a==1){
        return 1;
    }
    else{
        return(a*recur(a-1));
    }

}
int main(){
    int n;
    printf("Enter the number you want factorial of :");
    scanf("%d",&n);
    printf("The factorial of %d is %d",n,recur(n));

}