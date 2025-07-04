// Calculate the bill

#include <stdio.h>

void main()
{

    int unit;
    printf("Enter the units of your electricity bill:");
    scanf("%d", &unit);

    if (unit >= 1 && unit <= 50)
        printf("The payable amount is %d rs.", unit * 30);
    else if (unit >= 51 && unit <= 150)
        printf("The payable amount is %d rs.", unit * 40);
    else
        printf("The payable amount is %d rs.", unit * 50);

    return;
}