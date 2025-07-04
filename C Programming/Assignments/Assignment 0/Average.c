// Find the average of five numbers 

#include<stdio.h>

void main(){

    int num1,num2,num3,num4,num5, Avg;
    printf("Enter an First Number: ");
    scanf("%d", &num1);

    printf("Enter an Second Number: ");
    scanf("%d", &num2);

    printf("Enter an Third Number: ");
    scanf("%d", &num3);

    printf("Enter an Fourth Number: ");
    scanf("%d", &num4);

    printf("Enter an Fifth Number: ");
    scanf("%d", &num5);

    Avg = (num1 + num2 + num3 + num4 + num5 )/5 ;

    printf("The average of %d,%d,%d,%d,%d is:- %d",num1,num2,num3,num4,num5,Avg);


    return;

}