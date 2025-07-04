// This code is to check the number is even or odd

#include<stdio.h>

void main(){

    int no ;

    printf("Enter the number :");
    scanf("%d",&no);

    if(no%2==0){
        printf("The number is even");
    }
    else{
        printf("The number is odd");
    }

    return;

}