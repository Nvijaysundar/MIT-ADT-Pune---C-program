#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a Char: ");
    scanf("%c",&ch);
    if(ch>=48 && ch <='9')
        printf("Number");
    else if(ch>=65 && ch<=90)
        printf("Upper Case Alphabet");
    else if(ch>='a' && ch<'z')
        printf("Lower case Alphabet");
    else
        printf("Symbol");
}
