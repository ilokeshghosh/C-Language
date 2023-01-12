#include<stdio.h>
int main() 
{
    int arr[] = {5,4,3,6,78,1,12,22};
    printf("The adress of 1st value of array is : %d\n", &arr[0]);
    printf("The adress of 1st value of array is : %d\n", arr);
    printf("The adress of 2nd value of array is : %d\n", &arr[1]);
    printf("The adress of 2nd value of array is : %d\n\n", arr + 1);
    //arr ++;//this line will throw a error
    printf("The value of 1st array is : %d\n", arr[0]);
    printf("The value of 1st array is : %d\n", *(&arr[0]));
    printf("The value of 1st array is : %d\n", *(arr));
    printf("The value of 2nd array is : %d\n", arr[1]);
    printf("The value of 2nd array is : %d\n", *(&arr[1]));
    printf("The value of 2nd array is : %d\n", *(arr + 1));

    return 0 ;
}