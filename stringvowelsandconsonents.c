#include<stdio.h>>
int vowelchecker(char ch)
{
    switch(ch)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'U':
    case 'u':
        return 1;
    }
    return 0;
}
int main()
{
    char str[100];
    int uc=0,lc=0,v=0,c=0,s=0,d=0,sum=0;
    scanf("%[^\n]",str);
    for(int i=0;str[i]!='\0';i++)
    {
        char ch = str[i];
        if(ch>=65 && ch<=90)
        {
            if(vowelchecker(ch))
            {
                ++v;
            }
            else
                ++c;
            uc++;

        }
        else if(ch>=97 && ch<=122)
        {
            if(vowelchecker(ch))
            {
                ++v;
            }
            else
                ++c;
            lc++;
        }
        else if(ch>=48 && ch<=57)
        {
            ++d;

            sum += ((int)ch -48);
        }
        else
            ++s;
    }
    printf("Vowel     : %d\n",v);
    printf("Consonant : %d\n",c);
    printf("Upper case: %d\n",uc);
    printf("Lower case: %d\n",lc);
    printf("Symbols   : %d\n",s);
    printf("Digits    : %d\n",d);
    printf("Sum       : %d\n",sum);
}
