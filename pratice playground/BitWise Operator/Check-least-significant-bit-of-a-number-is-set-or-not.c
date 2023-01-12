#include<stdio.h>
int main(){
    int a,b;
    printf("PS :- Enter only binary numbers\n");
    printf("Enter the number :\n");
    scanf("%d",&a);
    if(a & 1){
        printf("Lsb of %d is set(1)",a);
    }
    else{
        printf("Lsb of %d is unset(0)",a);

    }
return 0;
    
}
