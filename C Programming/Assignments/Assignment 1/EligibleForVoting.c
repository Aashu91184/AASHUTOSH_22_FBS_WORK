// This code is to check that you are eligible for voting or not 

#include<stdio.h>

void main(){

    int age ;

    printf("Enter your age:");
    scanf("%d",&age);

    if (age >= 18)
    {
        printf("You are eligible for the voting ");
    } else {
        printf("You are not eligible for the voting");
    }

    return;
    

}

