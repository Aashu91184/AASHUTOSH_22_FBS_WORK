// Area of triangle 

#include<stdio.h>

void main(){

    int Base , Height , Area ;

    printf("Enter your Base:");
    scanf("%d",&Base);

    printf("Enter your Height:");
    scanf("%d",&Height);

    Area = 0.5 * Base * Height;

    printf("The Area of the given %d cm Base and %d cm Height is: %d cm .", Base,Height,Area);

    return;

}