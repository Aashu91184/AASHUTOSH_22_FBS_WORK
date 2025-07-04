// Convert the minutes to hour and remaining minutes .

#include<stdio.h>

void main(){

    int min , hour ,Remaining_min;
    printf("Enter the time in minutes:");
    scanf("%d",&min);
    hour = min/60;
    Remaining_min = min % 60 ;

    printf("The given %d minutes have %d hours and %d minutes!",min,hour,Remaining_min);

    return;

}