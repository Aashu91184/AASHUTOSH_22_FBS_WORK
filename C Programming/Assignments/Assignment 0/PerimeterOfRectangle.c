// Find the perimeter of Rectangle

#include<stdio.h>

void main(){

    int Length, Width , Perimeter ;

    printf("Enter your Length:");
    scanf("%d",&Length);

    printf("Enter your Width:");
    scanf("%d",&Width);

    Perimeter = 2*(Length + Width);

    printf("The perimeter of the given %d cm length and %d cm width is:- %d cm .", Length,Width,Perimeter);

    return;

}