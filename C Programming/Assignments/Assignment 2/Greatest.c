//Write a program to find greatest of three numbers using nested if-else.

#include<stdio.h>

void main(){

    int a,b,c;

    printf("Enter the first number:");
    scanf("%d", &a);

    printf("Enter the second number:");
    scanf("%d", &b);

    printf("Enter the third number:");
    scanf("%d", &c);

    if (a>b)
        if(a>c)
            printf("First number is the greatest number....");
        else
            printf("Third number is the greatest number....");
    else
        if (b>c)
            printf("Second number is the greatest number....");
        else
            printf("Third number is the greatest number....");

    return;

}