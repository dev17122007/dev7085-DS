#include<stdio.h>
#include<conio.h>

struct student{
    int rollno;
    char name[20]
};

void main()
{
    struct student s1;

    printf("\n enter roll number:");
    scanf("%d",&s1.rollno);

    printf("\n Enter name:");
    scanf("%s",&s1.name);

    printf("\n student Data is an follows");
    printf("\n *****************");

    printf("\n Roll number is: %d", s1.rollno);
    printf("\n Name is: %s", s1.name);
}
