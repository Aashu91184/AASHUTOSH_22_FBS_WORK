// Accept three sides of a triangle from the user and determine whether the triangle is
// equilateral, isosceles, or scalene.

#include <stdio.h>

void main()
{

    int side1, side2, side3;

    printf("Enter the sides of a triangle:");
    scanf("%d %d %d", &side1, &side2, &side3);

    if (side1 != 0 && side2 != 0 && side3 != 0)
    {
        if (side1 == side2 && side1 == side3)
            printf("The triangle is an equilateral triangle...");
        else if (side1 == side2 || side2 == side3 || side1 == side3)
            printf("The triangle is isosceles triangle...");
        else
            printf("The entered tiangle is scalene triangle... ");
    }else{
        printf("The entered side of triangle cannot be zero by any chance...");
    }

    return;
}