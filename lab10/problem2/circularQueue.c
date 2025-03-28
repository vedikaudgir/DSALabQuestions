#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

int queue[SIZE], front = -1, rear = -1;

int isEmpty()
{
    return front == -1;
}

int isFull()
{
    return (rear + 1) % SIZE == front;
}

void enqueue(int val)
{
    if (isFull())
    {
        printf("\nQueue Overflow!")
        return;
    }
    if (isEmpty())
    {
        front = 0;
    }
    rear = (rear + 1) % SIZE;
    queue[rear] = val;
}

void dequeue()
{
    if (isEmpty())
    {
        return;
    }
    if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front = (front + 1) % SIZE;
    }
}

void display()
{
    if (isEmpty())
    {
        printf("\nQueue underflow!");
        return;
    }
    int i = front;
    while (1)
    {
        printf("%8d", queue[i]);
        if (i == rear)
            break;
        i = (i + 1) % SIZE;
    }
    printf("\n");
}

int main()
{
    int choice = 0, val;
    while (1)
    {
        printf("1. Enqueue\n2. Dequeue\n3. isEmpty\n4. isFull\n5. Display\n6. Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            printf("\nEnter value to insert - ");
            scanf("%d", &val);
            enqueue(val);
            break;
        }
        case 2:
        {
            dequeue();
            break;
        }
        case 3:
        {
            printf("%s\n", isEmpty() ? "Yes" : "No");
            break;
        }
        case 4:
        {
            printf("%s\n", isFull() ? "Yes" : "No");
            break;
        }
        case 5:
        {
            display();
            break;
        }
        case 6:
        {
            exit(0);
        }
        }
    }
}