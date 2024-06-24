#include<stdio.h>
#include<stdlib.h>
int main()
{
    int size,size1;
    printf("Enter Size: ");
    scanf("%d",&size);
    //int arr[size]
    int *arr;
    arr  = (int *)calloc(size , sizeof(arr));
    printf("Enter Array Elements: ");
    for(int i=0;i<size;i++)
        scanf("%d",arr+i);
    printf("Array Elements are : ");
    for(int i=0;i<size;i++)
        printf("%d ",*(arr+i));
    printf("\nEnter new size: ");
    scanf("%d",&size1);
    arr = realloc(arr, size*sizeof(int));
    for(int i=size;i<size1;i++)
        scanf("%d",arr+i);

    printf("Array Elements are : ");
    for(int i=0;i<size1;i++)
        printf("%d ",*(arr+i));
    free(arr);
}
