#include<stdio.h>
#include<string.h>
static int arrcounter = 0;
struct Employee{
    char id[50],name[50],department[20];
    float mon_sal[12];
}emp[100];

void addNewEmployee()
{
    fflush(stdin);
    printf("Enter Id: ");
    scanf("%[^\n]s",emp[arrcounter].id);
    fflush(stdin);
    printf("Enter Name : ");
    scanf("%[^\n]s",emp[arrcounter].name);
    fflush(stdin);
    printf("Enter Department:: ");
    scanf("%[^\n]s",emp[arrcounter].department);
    for(int j=1;j<=7;j++){
        printf("Enter %d Sal : ",j);
        scanf("%f",&emp[arrcounter].mon_sal[j-1]);
    }

    if(emp[arrcounter].id!="\0"){
        printf("Data Insertion Successfull\n");
        ++arrcounter;
    }
    else
        printf("Insertion Failed\n");

}

float calannualSal(float arr[]){
    float sum =0;
    for(int i=0;i<6;i++)
    {
        sum += arr[i];
    }
    return sum;
}

void totalDetails()
{
    for(int i=0;i<arrcounter;i++)
    {
        printf("%s\t%s\t%s\t",emp[i].id,emp[i].name,emp[i].department);
        for(int j=0;j<6;j++)
            printf("%.2f\t",emp[i].mon_sal[j]);
        printf("%.2f\n",calannualSal(emp[i].mon_sal));
    }
}
void  getbyId(){
    char id[50];
    printf("Enter Id to Search : ");
    fflush(stdin);
    scanf("%[^\n]s",id);
    int k;
    for(int i=0;i<arrcounter;i++)
    {
        if(strcmp(emp[i].id,id)==0)
        {
            k=i;
            break;
        }
    }
    printf("%s\t%s\t%s\t",emp[k].id,emp[k].name,emp[k].department);
        for(int j=0;j<6;j++)
            printf("%.2f\t",emp[k].mon_sal[j]);
        printf("%.2f\n",calannualSal(emp[k].mon_sal));

}
void highestGroser(){
    int maxindex = 0;
    float maxgroser = calannualSal(emp[0].mon_sal);
    for(int i=1;i<arrcounter;i++)
    {
        if(maxgroser <calannualSal(emp[i].mon_sal))
        {
            maxindex = i;
        }
    }
    printf("Max Earner : \n");
    printf("%s\t%s\t%s\t",emp[maxindex].id,emp[maxindex].name,emp[maxindex].department);
        for(int j=0;j<6;j++)
            printf("%.2f\t",emp[maxindex].mon_sal[j]);
        printf("%.2f\n",calannualSal(emp[maxindex].mon_sal));
}
int main()
{
    int n;
    while(1)
    {
        printf("1.Add Employee\n2.TotalEmpolyeedetails\n");
        printf("3.Employee by Id\n4.Highest Earner\n5.exit  \t ::");
        scanf("%d",&n);
        switch(n)
        {
        case 1:
           addNewEmployee();
           break;
        case 2:
            totalDetails();
            break;
        case 3:
            getbyId();
            break;
        case 4:
            highestGroser();
            break;
        case 5:
            return 0;
        }
    }
}
