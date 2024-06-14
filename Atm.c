#include<stdio.h>
float bal = 15000;
int checkpin(int pin)
{
    int count=0;
    while(pin>0)
    {
        pin/=10;
        count++;
    }
    if(count ==4)
        return 1;
    else
        return 0;
}
int pinverify(int pin)
{
    switch(pin)
    {
    case 1111:
    case 2222:
    case 3333:
        return 1;
    default:
        return 0;
    }
}
void deposit()
{
    int amount;
    scanf("%d",&amount);
    if(amount%100 == 0)
    {
            bal += amount;
    }
    else
        printf("Incorrect Amount Format\n");
}

void withdrawl()
{
    int amount;
    scanf("%d",&amount);
    if(amount%100 == 0)
    {
            if(amount>bal)
            {
                printf("Insufficient Funds");
            }
            else
            {
                bal -= amount;
            }
    }
    else
        printf("Incorrect Amount Format\n");
}
int choices()
{
    int choice;
    printf("1.Balance\t2.Deposit\t3.Withdraw\t4.Exit\t :: ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("Available Balance : %.2f\n",bal);
        break;
    case 2:
        deposit();
        break;
    case 3:
        withdrawl();
        break;
    case 4:
        printf("Thanks for using Services . Visit Again..!\n");
        return 1;
    default:
        printf("invalid Selection\n");
        choices();
    }
    printf("Do You wish to Continue: 1.yes \t 0.No \t :: ");
    scanf("%d",&choice);
    if(choice)
        choices();
    else
        return 1;

}
int main()
{
    int pin,pin_chances=3;
    while(1)
    {
        printf("Enter Pin : ");
        scanf("%d",&pin);
        if(checkpin(pin))
        {
            if(pinverify(pin))
            {
                printf("valid pin\n");
                if(choices())
                    return 0;
            }
            else
            {
                printf("Incorrect pin\n");
                printf("Leftover Chances: %d\n",--pin_chances);
                if(pin_chances ==0)
                {
                    printf("Pin Blocked, Visit nearest branch\n");
                    return 0;
                }
            }
        }
        else
            printf("Pin should of 4 digits\n");
    }
}
