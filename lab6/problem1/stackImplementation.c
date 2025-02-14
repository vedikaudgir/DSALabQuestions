#include <stdio.h>
#define MAX 10

int stack[MAX];
int top = -1;

void push(int dataToPush)
{
    if (top == MAX)
    {
        printf("\nStack is already full");
    }
    else
    {
        top++;
        stack[top] = dataToPush;
        printf("\n%d pushed at %d position in stack!", dataToPush, top);
    }
}
void pop()
{
    if (top == -1)
    {
        printf("\nStack is already empty");
    }
    else
    {
        top--;
        printf("\n%d popped fron %d position in stack!", top);
    }
}
int isEmpty()
{
    if (top == -1)
    {
        printf("\nThe stack is empty");
        return 1;
    }
    else
    {
        printf("\nThe stack is not empty");
        return 0;
    }
}
int isFull()
{
    if (top == MAX)
    {
        printf("\nThe stack is full");
        return 1;
    }
    else
    {
        printf("\nThe stack is not full");
        return 0;
    }
}

void main()
{
    int choice, data;

    printf("\nEnter 1 to push data.");
    printf("\nEnter 2 to pop data.");
    printf("\nEnter 3 to check weather the stack is empty or not.");
    printf("\nEnter 4 to check weather the stack is full or not.\n");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
        {
            printf("\nEnter the data to push - ");
            scanf("%d", &data);
            push(data);
            main();
            break;
        }
        case 2:
        {
            pop();
            main();
            break;
        }
        case 3:
        {
            isEmpty();
            main();
            break;
        }
        case 4:
        {
            isFull();
            main();
            break;
        }
        default:
        {
            printf("\nInvalid Input");
            break;
        }
    }
}