#include<stdio.h>
int primecheck(int num);
int main()
{
    int size,count=0;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
        scanf("%d",&arr[i]);

    for(int i=0;i<size;i++)
    {
        if(primecheck(arr[i])){
            printf("%d ",arr[i]);
            count++;
            }
    }
    printf("\nCount : %d",count);z
}

int primecheck(int num)
{
    for(int div=2;div<=num/2;div++)
    {
        if(num%div==0)
            return 0;
    }
    return 1;
}
