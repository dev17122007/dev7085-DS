#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*start,*newnode;

void main()
{
    start=NULL;
        newnode=(struct node *)mallco(sizeof(struct node));
        printf("enter value");
        scanf("%d", &newnode->data);
    newnode->next=NULL;
        start=newnode;
        printf("start value is %d", start->data);
    getch();
}
