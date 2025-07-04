// Ask the user to enter marks.
// Then show the result based on these rules:
// If marks are more than 75 → show "Distinction"
// If marks are more than 65 → show "First Class"
// If marks are more than 55 → show "Second Class"
// If marks are 40 or more → show "Pass Class"
// If marks are less than 40 → show "Fail"


#include<stdio.h>

void main(){

    int marks;

    printf("Enter your marks :");
    scanf("%d",&marks);

    if (marks >= 0 && marks<= 100)
    {
        if(marks>75)
            printf("You have passed with distinction ....");
        else if(marks>65)
            printf("You have passed with First class ....");
        else if (marks>55)
            printf("You have passed with Second class ....");
        else if (marks>=40)
            printf("You have passed with pass class ....");
        else
            printf("You Failed the exam....");
    } else 
        printf("You have entered the invalid marks !!!");
    

    return;

}