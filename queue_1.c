// If front==rear, then it means there is only a single element stored in the queue.

#include <stdio.h>
#include <stdlib.h>

int queue[50], front=-1, rear=-1;

void enqueue();
void dequeue();
void display();

int main()
{
    int ch;
    while(1)
    {
        printf("\n1: Enqueue\n2: Dequeue\n3: Display\n4: Exit\nEnter your choice: ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("\nInvalid choice!\n");
                break;
        }
    }
    return 0;
}

void enqueue()
{
    if(rear==49)
    {
        printf("\nOVERFLOW!\n");
    }
    else
    {
        if(rear==-1)
        {
            front++;
            rear++;
        }
        else
        {
            rear++;
        }
        printf("\n");
        scanf("%d", &queue[rear]);
    }
}

void dequeue()
{
    if(front==-1)
    {
        printf("\nUNDERFLOW!\n");
    }
    else if(front>rear)
    {
        front=-1;
        rear=-1;
    }
    else
    {
        printf("\n%d has been deleted!\n", queue[front]);
        front++;
    }
}

void display()
{
    if(front==-1)
    {
        printf("\nUNDERFLOW!\n");
    }
    else
    {
        printf("\n");
        for(int i=front;i<=rear;i++)
        {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }  
}