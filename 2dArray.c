#include<stdio.h>
int main()
{
    int row,col,sum = 0;
    scanf("%d%d",&row,&col);
    int arr[row][col];

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(j<=i)
                sum += arr[i][j];
        }
    }

    printf("Sum : %d",sum);
}
