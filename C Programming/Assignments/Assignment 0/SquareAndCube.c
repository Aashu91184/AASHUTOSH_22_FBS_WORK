// Find the square and cube of the given number.

#include<stdio.h>

void main(){

    int Num , Square ,Cube ;
    
    printf("Enter your Number:");
    scanf("%d",&Num);

    Square = Num*Num;
    printf("The square of the %d is: %d \n", Num , Square);

    Cube = Num*Num*Num;
    printf("The Cube of the %d is: %d", Num , Cube);

    return;

}