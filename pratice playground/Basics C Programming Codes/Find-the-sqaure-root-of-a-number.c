#include<stdio.h>
#include<math.h>
int main(){
    float  num = 3,sq,a = 1;
     while(a = 1){
        printf("Enter the number that you want square root:\n");
        scanf("%f",&num);
        if (num == 0)
        { 
            break ;
        }
   
        sq = sqrt(num);
        printf("The sqaure root of %f is : %.3f\n\n",num,sq);
     }
        
    

 return 0;

}