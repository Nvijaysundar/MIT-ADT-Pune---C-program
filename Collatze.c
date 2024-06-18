#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    printf("%d ",num);
    while(num>1)
    {
        if(num%2==1)
            num = 3*num +1;
        else
            num /=2;

        printf("%d ",num);
    }
}
