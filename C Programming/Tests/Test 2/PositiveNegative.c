//  to find the entered number is positive negative or zero 

#include<stdio.h>

void main(){
    int num ;

    printf("Enter your number: ");
    scanf("%d",&num);

    if (num>0)
        printf("The entered number is positive..");
     else if (num == 0)
        printf("The entered number is ZERO (Neutral)..");
    else
        printf("The entered number is negative..");
    return;

}