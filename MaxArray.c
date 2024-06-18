#include<stdio.h>
int main()
{
    int size;
    printf("Enter Size : ");
    scanf("%d",&size);
    int arr[size];

    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    //56 447 55 224 641
    int max = arr[0];

    for(int i=1;i<size;i++)
    {
        if(max<arr[i])
            max = arr[i];
    }
    printf("Max: %d",max);
}
