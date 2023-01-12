#include<stdio.h>
void main(){
    float cm;
    printf("Enter the length in cm :\n");
    scanf("%f",&cm);

    printf("The %fcm in m is:\n%.4fM\n",cm, cm / 100);
    printf("The %fcm in km is:\n%.4fKM",cm, cm / 100000);
}