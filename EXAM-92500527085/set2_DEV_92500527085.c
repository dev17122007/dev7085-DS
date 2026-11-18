// set:2 write an program with following operations in queue
// insert delete display exit.


#include <stdio.h>
#define SIZE 5


int queue[SIZE];
int front = -1, rear = -1;


void insert()
{
    int a;


    if(rear == SIZE - 1)
        printf("Queue Overflow");
    else
    {
        printf("Enter value: ");
        scanf("%d", &a);


        if(front == -1)
            front = 0;


        rear++;
        queue[rear] = a;
    }
}


void delete()
{
    if(front == -1)
        printf("Queue Underflow");
    else
    {
        printf("Deleted element = %d", queue[front]);
        front++;


        if(front > rear)
        {
            front = -1;
            rear = -1;
        }
    }
}


void display()
{
    int i;


    if(front == -1)
        printf("Queue is Empty");
    else
    {
        printf("Queue elements:\n");


        for(i = front; i <= rear; i++)
            printf("%d ", queue[i]);
    }
}


int main()
{
    int ch;

    while(1)
    {
        printf("\n1. Insert");
        printf("\n2. Delete");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &ch);


        switch(ch)
        {
            case 1:
                insert();
                break;


            case 2:
                delete();
                break;


            case 3:
                display();
                break;


            case 4:
                printf("Exit");
                break;


            default:
                printf("Invalid Choice");
        }

    }

    return 0;
}

