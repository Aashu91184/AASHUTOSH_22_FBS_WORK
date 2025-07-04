// Find the percentage of marks obtained in 5 subjects.

#include<stdio.h>

void main(){

    int Sub1, Sub2, Sub3, Sub4, Sub5, Total_marks;
    float Percentage ;
    
    printf("Enter your Marks in Subject 1:");
    scanf("%d",&Sub1);

    printf("Enter your Marks in Subject 2:");
    scanf("%d",&Sub2);

    printf("Enter your Marks in Subject 3:");
    scanf("%d",&Sub3);

    printf("Enter your Marks in Subject 4:");
    scanf("%d",&Sub4);

    printf("Enter your Marks in Subject 5:");
    scanf("%d",&Sub5);

    Total_marks = Sub1 + Sub2 + Sub3 + Sub4 + Sub5 ;

    Percentage = (Total_marks/500.0)*100 ;

    printf("Total marks obtained is : %d \n Obtained Persentade is : %.2f percent.",Total_marks,Percentage);

    return;
    
}