#include <stdio.h>
#include <string.h>

struct student
{
    int roll_no;
    char name[100];
    float mark;
};

void sortRoll(struct student s[], int n)
{
    struct student temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(s[j].roll_no > s[j+1].roll_no)
            {
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }
}

void sortName(struct student s[], int n)
{
    struct student temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(strcmp(s[j].name , s[j+1].name) > 0)
            {
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }
}

void sortMark(struct student s[], int n)
{
    struct student temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(s[j].mark < s[j+1].mark)
            {
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }
}

void display(struct student s[], int n)
{   printf("\nRoll No\t Name\tMark");
    for(int i=0;i<n;i++)
    {
        printf(" \n %d",s[i].roll_no);
        printf("\t%s",s[i].name);
        printf("\t%f\n",s[i].mark);
    }
}

int main()
{
    struct student s[100];
    int n;

    printf("Enter number of students: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("\nStudent %d\n",i+1);

        printf("Roll no: ");
        scanf("%d",&s[i].roll_no);

        printf("Name: ");
        scanf("%s",s[i].name);

        printf("Mark: ");
        scanf("%f",&s[i].mark);
    }

    printf("\n--- Sorted by Roll Number ---\n");
    sortRoll(s,n);
    display(s,n);

    printf("\n--- Sorted by Name ---\n");
    sortName(s,n);
    display(s,n);

    printf("\n--- RANKLIST ---\n");
    sortMark(s,n);
    display(s,n);

    return 0;
}