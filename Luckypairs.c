#include<stdio.h>
int main()
{
    int a,b,n;
    printf("Enter base score of A:: ");
    scanf("%d",&a);
    printf("Enter base score of B :: ");
    scanf("%d",&b);
    printf("Enter No of turns:: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i%2==1)
            a*=2;
        else
            b*=2;
    }
    printf("Result: %d",a+b);
}
