#include<stdio.h>
#include<stdlib.h>
int main()
{
   int guess= rand()%100+1,num,attempts = 0;

   do{
    printf("\nEnter a Number to Guess: ");
    scanf("%d",&num);
    attempts++;
    if(num>guess)
        printf("Too high,Try Again!!");
    else if(num<guess)
        printf("Too Low, Try Again!!");
    else
    {
        printf("Congratulations!, You got the correct Number\n");
        printf("\n No of Attempts: %d",attempts);
    }
   }while(num != guess);
}
