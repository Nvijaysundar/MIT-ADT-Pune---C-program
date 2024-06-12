#include<stdio.h>
int main()
{
    int boat_cap,no_adults,no_child;
    printf("Enter Boat_Cap: ");
    scanf("%d",&boat_cap);
    printf("Enter No of Adults: ");
    scanf("%d",&no_adults);
    printf("Enter no of child: ");
    scanf("%d",&no_child);
    if(boat_cap >= no_adults*75 + no_child*30)
        printf("Boat is stable");
    else
        printf("Boat is Unstable");
}
