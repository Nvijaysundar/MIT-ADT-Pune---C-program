#include<stdio.h>
#include<string.h>
int checkpalin(char arr[])
{
    for(int i=0;i<strlen(arr)/2;i++)
    {
        if(arr[i] != arr[strlen(arr)-i-1])
            return 0;
    }

    return 1;
}
int main()
{
    char str[20];
    scanf("%s",str);

    if(checkpalin(str))
        printf("Palindrome");
    else
        printf("Not");

}
