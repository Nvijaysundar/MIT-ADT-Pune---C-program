#include<stdio.h>
int main()
{
    int n,count=1,seq=2;
    scanf("%d",&n);
    if(n==1)
    {
        printf("1");
    }
    else if(n>1)
    {
        while(count<n)
        {
            if(seq%2==0 || seq%3==0 || seq%5==0)
            {
                ++count;
            }
            if(count == n)
                printf("%d:%d ",count,seq);
            ++seq;
        }
    }
    else
        printf("Invalid Input");
}
