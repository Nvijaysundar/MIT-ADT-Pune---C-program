#include<stdio.h>
int main()
{
    char str[50],str2[50];
    printf("Enter String : ");
    scanf("%s",str);
    printf("Given String : %s\n",str);
    fflush(stdin);
    printf("Enter new String");
    scanf("%[^\n]s",str2);
    printf("Given String : %s\n",str2);

}
