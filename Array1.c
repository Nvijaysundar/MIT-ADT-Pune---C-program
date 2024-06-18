#include<stdio.h>
int main()
{
    int arr[3] = {34,56,76};
    char arr1[4] = {'a','c','e',78};
    int arr3[5];
    printf("%c\n",arr1[3]);
    printf("%d\n",arr[2]);

    for(int i=0;i<3;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr3[i]);
    }

    for(int i=0;i<5;i++)
    {
        printf("%d ",arr3[i]);
    }
}
