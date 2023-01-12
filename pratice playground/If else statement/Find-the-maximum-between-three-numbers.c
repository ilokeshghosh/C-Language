#include<stdio.h>
int main() 
{
    float a,b,c;
    printf("Enter the three number consicutively :\n");
    scanf("%f\n%f\n%f",&a,&b,&c);
    if(a > b){
        if(a>c){
            printf("%-.2f(a) is the greatest among three number",a);
        }
        else
        {
            printf("%-.2f(c) is the greatest among three number ",c);
        }
    }
    else
    {
        if (b>c)
        {
            printf("%-.2f(b) is the greatest  among three  numbers",b);
        }
        else
        {
            printf("%-.2f(c) is the greatest among three numbers ",c);
        }
        
        
    }
    
    return 0 ;
}