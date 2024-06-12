#include<stdio.h>
int main()
{
    int marks;
    printf("Enter Marks: ");
    scanf("%d",&marks);
    if(marks>=91 && marks <= 100)
        printf("Grade: A+");
    else if(marks >=81 && marks<=90)
        printf("Grade : A");
    else if(marks >=71 && marks <= 80)
        printf("Grade : B+");
    else if(marks >=61 && marks <= 70)
        printf("Grade : B");
    else if (marks >=40 && marks <= 60)
        printf("Grade : C");
    else if (marks >=0 && marks <40)
        printf("Grade : F");
    else
        printf("Invalid Input");

}
