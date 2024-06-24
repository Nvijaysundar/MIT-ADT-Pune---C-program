#include<stdio.h>
int main()
{
    int size;
    printf("Enter size: ");
    scanf("%d",&size);
    int arr[size][size];

    for(int i=0;i<size;i++)
        for(int j=0;j<size;j++)
            scanf("%d",(*(arr+i)+j));

    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++)
            printf("%d ",*(*(arr+i)+j));
        printf("\n");
    }
}
