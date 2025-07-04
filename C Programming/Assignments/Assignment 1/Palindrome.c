// To find the 4 digit number is palinrome or not 

#include<stdio.h>

void main(){

    
    int number,r1,r2,r3,temp1,rev;
    printf("Enter your 3 igit number :");
    scanf("%d",&number);

    r1 = number % 10;
    temp1 = number / 10 ;

    r2 = temp1 % 10 ;
    r3 = temp1 / 10;

    rev = r1 * 100 + r2 * 10 + r3;
    if (rev == number)
    {
        printf("The number is palindrome");
    }else{
        printf("The number is not a palindrome ");
    }
    

    return;
}