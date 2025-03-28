//WAP in C to implement doubly linked list.
//Author - Vedika Udgir

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *prev, *next;
} Node;

Node *head = NULL;

void insertEnd(int val)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = val;
    newNode->next = NULL;
    if (!head)
    {
        newNode->prev = NULL;
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

void insertBeginning(int val)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = val;
    newNode->prev = NULL;
    newNode->next = head;
    if (head)
    {
        head->prev = newNode;
    }
    head = newNode;
}

void insertAtPosition(int val, int pos)
{
    if (pos <= 1)
    {
        insertBeginning(val);
        return;
    }
    Node *newNode = (Node *)malloc(sizeof(Node)), *temp = head;
    newNode->data = val;
    for (int i = 1; temp && i < pos - 1; i++)
    {
        temp = temp->next;
    }
    if (!temp || !temp->next)
    {
        insertEnd(val);
        return;
    }
    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next->prev = newNode;
    temp->next = newNode;
}

void traverse()
{
    Node *temp = head;
    while (temp)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int countNodes()
{
    int count = 0;
    Node *temp = head;
    while (temp)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

int main()
{
    int choice, val, pos;
    while (1)
    {
        printf("1. Insert at end\n2. Insert at beginning\n3. Insert at position\n4. Traverse\n5. Count nodes\n6. Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            scanf("%d", &val);
            insertEnd(val);
            break;
        }
        case 2:
        {
            scanf("%d", &val);
            insertBeginning(val);
            break;
        }
        case 3:
        {
            scanf("%d %d", &val, &pos);
            insertAtPosition(val, pos);
            break;
        }
        case 4:
        {
            traverse();
            break;
        }
        case 5:
        {
            printf("%d\n", countNodes());
            break;
        }
        case 6:
        {
            exit(0);
        }
        }
    }
}
