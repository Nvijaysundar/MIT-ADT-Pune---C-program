#include<stdio.h>
int main()
{
    int days;
    printf("Enter number of Days: ");
    scanf("%d",&days);
    int year = days/365;
    int month = (days%365)/30;
    int day = (days%365)%30;
    printf("%d years,%d months,%d days",year,month,day);
}
