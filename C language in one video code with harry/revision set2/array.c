#include<stdio.h>
int main(){
    int a,b,n;
    int marks[5];

   

    printf("Enter the 5 values of array :\n");
    for(int i=0;i<5;i++){
        scanf("%d",&marks[i]);
    }

    printf("The entered array is :");

    for(int i=0;i<5;i++){

    printf("\n%d",marks[i]);
    }
}