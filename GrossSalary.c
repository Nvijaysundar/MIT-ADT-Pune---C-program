#include<stdio.h>
int main()
{
    float bsal= 15000, dallowance = 3000,hra = 5000;
    float gross = bsal + dallowance + hra;
    printf("Basic Sal : %f\nDearness Allowance : %f\nHouse Rent Allowance : %f\nGross Salary : Rs.%f",bsal,dallowance,hra,gross);
}
