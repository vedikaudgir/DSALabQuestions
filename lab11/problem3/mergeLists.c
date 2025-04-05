#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void insertEnd(struct Node **head, int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (*head == NULL)
    {
        *head = newNode;
        return;
    }
    struct Node *temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void deleteEnd(struct Node **head)
{
    if (*head == NULL)
    {
        printf("List is empty!\n");
        return;
    }
    struct Node *temp = *head;
    if (temp->next == NULL)
    {
        free(temp);
        *head = NULL;
        return;
    }
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
}

void printList(struct Node *head)
{
    if (head == NULL)
    {
        printf("List is empty!\n");
        return;
    }
    struct Node *temp = head;
    printf("Linked List: ");
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void mergeLists(struct Node *head1, struct Node *head2)
{
    struct Node *ptr1 = head1, *ptr2 = head2;
    struct Node *next1, *next2;

    while (ptr1 != NULL && ptr2 != NULL)
    {
        next1 = ptr1->next;
        next2 = ptr2->next;

        ptr1->next = ptr2;
        ptr2->next = next1;

        ptr1 = next1;
        ptr2 = next2;
    }
}