//  Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the
// desired operations.

#include <stdio.h>

void main()
{

    int first_num, Second_num;
    char ch;

    printf("Enter the first number:");
    scanf("%d", &first_num);

    printf("Enter the second number:");
    scanf("%d", &Second_num);

    fflush(stdin);
    printf("Enter the operation you want to perform :");
    scanf("%c", &ch);

    if (ch == '+')
        printf("The sum of two numbers is : %d ", first_num + Second_num);
    else if (ch == '-')
        printf("The substraction of two numbers is : %d ", first_num - Second_num);
    else if (ch == '*')
        printf("The Multiplication of two numbers is : %d ", first_num * Second_num);
    else if (ch == '/')
        printf("The division of two numbers is : %d ", first_num / Second_num);
    else if (ch == '%')
        printf("The remainder of two numbers is : %d ", first_num % Second_num);
    else
        printf("Invalid character entered...");

    return;

    return;
}