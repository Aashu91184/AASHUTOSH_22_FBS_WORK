// Accept the price from user. Ask the user if he is a student (user may say y or n). If he
// is a student and he has purchased more than 500 than discount is 20% otherwise
// discount is 10%.But if he is not a student then if he has purchased more than 600
// discount is 15% otherwise there is not discount.

#include<stdio.h>
#include<stdbool.h>

int main(){

    double price , total_price;
    bool is_student;

    printf("Are you a student? (1 for Yes, 0 for No): ");
    scanf("%d", &is_student);

    printf("Enter the price: ");
    scanf("%lf", &price);

    if (is_student == 1)
        if(price>500)
            printf("The total payable amount with discount is : %lf RS.", price-price*0.20);
        else
            printf("The total payable amount with discount is : %lf RS.", price-price*0.10);
    else
        if(price>600)
            printf("The total payable amount with discount is : %lf RS.", price-price*0.15);
        else
            printf("The total payable amount is : %lf RS.", price);

    return 0;
}