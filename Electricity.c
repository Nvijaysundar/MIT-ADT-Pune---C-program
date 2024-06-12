#include<stdio.h>
int main()
{
    char type_of_connection;
    float units = 5,current_bill =0,discount,total_bill;
    printf("Enter Type of Connection |");
    printf("H- House Hold | R - Retail | L - Large :: ");
    scanf("%c",&type_of_connection);
    printf("Enter No of Units: Consumed:: ");
    scanf("%f",&units);
    if(type_of_connection == 'H' || type_of_connection =='h')
    {
        printf("-HouseHold Connection-\n");
        if(units<=50)
        {
            current_bill = units * 1;
        }
        if(units>=51 &&units<=200)
        {
            current_bill = 50 + (units -50) * 1.75;
        }
        if(units>=201 && units<=500)
        {
            current_bill = 312.5 + (units - 200) * 2.25;
        }
        if (units>500)
            current_bill = 987.5+(units - 500) * 3;

        discount = (0.05 * current_bill);
    }
    else if(type_of_connection == 'R' || type_of_connection =='r')
    {
        printf("-Retail Industry-\n");
        if(units<=75)
            current_bill += units * 1.23;
        if(units>=76 && units <175)
        {
            current_bill += (units -75) * 2.35 + 92.25;
        }
        if(units>=176 && units <=450)
        {
            current_bill += (units -175) * 2.35 + 327.25;
        }
        if(units>450)
        {
            current_bill += (units -450) * 2.35 + 1152.25;
        }
        discount = (0.07*current_bill);
    }
    else if(type_of_connection == 'L' || type_of_connection =='l')
    {
        printf("-Large Scale Industry-\n");
    }
    else
    {
        printf("Invalid Input");
    }
    printf("Total Units Consumed : %.2f\n",units);
    printf("Current Bill: %.2f\n",current_bill);
    printf("Discount : %.2f/-\n",discount);
    printf("Total Bill : %.2f/-\n",current_bill-discount);

}
