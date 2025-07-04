// Calculating total salary based on basic. If basic <=5000 da, ta and hra will be
// 10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 30%
// respectively.


#include<stdio.h>

void main(){

    double  da , ta , hra , total_salary , salary ;

    printf("Enter your Salary:");
    scanf("%lf",&salary);

    if (salary<=5000){
        da = salary * 0.10;
        ta = salary * 0.20;
        hra = salary * 0.25;
    } else{
        da = salary * 0.15;
        ta = salary * 0.25;
        hra = salary * 0.30;
    }

    total_salary = da+ta+hra+salary;

    printf("Your total salary is %lf",total_salary);

    return;


}