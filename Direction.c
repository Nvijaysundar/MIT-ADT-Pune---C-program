#include<stdio.h>
int main()
{
    int dir,sum=0;
    while(1)
    {
        printf("Select\t1:Left\t-1:Right\t0:Stop ::");
        scanf("%d",&dir);
        if(dir ==1 || dir == -1)
            sum += dir;
        else if(dir == 0)
            break;
        else
            printf("Invalid Input. Try Again...!\n");
    }
    printf("%d\n",sum);
    switch(sum%4)
    {
    case 0:
        printf("East");
        break;
    case 1:
    case -3:
        printf("North");
        break;
    case -2:
    case 2:
        printf("West");
        break;
    case 3:
    case -1:
        printf("South");
        break;
    }
}
