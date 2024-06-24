#include<stdio.h>
int main()
{
   const int days = 30;
   int rainfall[days],sum=0,drydays=0;
   for(int i=0;i<days;i++)
   {
       scanf("%d",&rainfall[i]);
       if(rainfall[i]<0 || rainfall[i]>500)
       {
           printf("Invalid Input");
           --i;
       }
       else
       {
           if(rainfall[i]==0)
            drydays++;
           sum += rainfall[i];
       }
   }
   printf("Total Rainfall : %d\n",sum);
   printf("Avg RainFall : %.2f\n",sum/(float)days);
   printf("Dry Days : %d",drydays);
}
