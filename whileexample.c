#include<stdio.h>
int main()
{
    int i =1;
    while(i){
        printf("Hello - %d\n",i++);
        if(i==50)
            i=0;
    }
}
