// The is to check the year is leap year or not 

#include<stdio.h>

void main(){

    int year ;

    printf("Enter the year that you want check :");
    scanf("%d",&year);

    if(year%4==0 && year%100!=0 || year%400==0){
        printf("The year entered is a leap year..");
    }else{
        printf("The year is not a leap year ");
    }

    return;
}