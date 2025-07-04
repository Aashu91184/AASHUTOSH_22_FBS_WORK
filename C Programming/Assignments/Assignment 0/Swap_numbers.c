// Swap two numbers.

#include<stdio.h>

void main(){

    int First_num = 10, Second_num = 20 , Temp, First_swapped, Second_swapped ;
    Temp = First_num;
    First_swapped = Second_num;
    Second_swapped = Temp;

    printf("The swapped numbers of %d and %d are :%d and %d",First_num,Second_num,First_swapped,Second_swapped);

    return ;

}