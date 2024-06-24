#include<stdio.h>
int main()
{
    int size;
    printf("Enter Size: ");
    scanf("%d",&size);
    int product[size],sold[size];
    printf("Enter %d products Quantity: ",size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",&product[i]);
    }
    printf("Enter %d size Quantity: ",size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",&sold[i]);
    }

    for(int i=0;i<size;i++)
    {
        printf("%d ",product[i]-sold[i]);
    }



}
