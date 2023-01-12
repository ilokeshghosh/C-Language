#include<stdio.h>
int main(){
    float a,b;
    printf("Enter the number :\n");
    scanf("%f",&a);
    if (a >= 0)
    {
        if(a == 0){
            printf("%-.2f is ZERO ",a);
        }
        else
        {
            printf("%-.2f is POSITIVE",a);
        }
        
        
    }
    else
    {
        printf("%-.2f is NEGETIVE",a);
    }
return 0;
    
}