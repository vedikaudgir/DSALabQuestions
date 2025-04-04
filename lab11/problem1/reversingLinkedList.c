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

struct Node* reverseList(struct Node *head)
{
    struct Node *prev = NULL;
    struct Node *curr = head;
    struct Node *next = NULL;

    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
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

int countNodes(struct Node *head)
{
    int count = 0;
    struct Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

int main()
{
    struct Node *head = NULL;
    int choice, value;
    while (1)
    {
        printf("\n1. Insert at End\n2. Delete from End\n3. Print List\n4. Count Nodes\n5. Reverse List\n6. exit.\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter value: ");
            scanf("%d", &value);
            insertEnd(&head, value);
            break;
        case 2:
            deleteEnd(&head);
            break;
        case 3:
            printList(head);
            break;
        case 4:
            printf("Number of nodes: %d\n", countNodes(head));
            break;
        case 5:
            printf("The reversed list is - \n");
            head = reverseList(head);
            printList(head);
            break;
        case 6:
            exit(0);
        default:
            printf("Invalid choice!\n");
        }
    }
    return 0;
}
