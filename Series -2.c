#include<stdio.h>
#include<math.h>
int main()
{
    int range;
    scanf("%d",&range);
    for(int index =0;index<range;index++)
    {
        if(index%2==0)
            printf("%d ",(int)pow(index,2)-2);
        else
            printf("%d ",(int)pow(index,2)-1);
    }
}
