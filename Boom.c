#include<stdio.h>
int main()
{
    int num,temp,flag7=0,flag9=0;
    scanf("%d",&num);
    while(num>0)
    {
        temp=num%10;
        if(temp==7)
        {
            flag7 =1;
        }
        if(temp ==9)
        {
            flag9=1;
        }
        num /= 10;
    }

    if(flag7 ==1 && flag9==1)
        printf("Super Boom");
    else if(flag7==1 || flag9 ==1)
        printf("Boom");
    else
        printf("No Boom");
}
