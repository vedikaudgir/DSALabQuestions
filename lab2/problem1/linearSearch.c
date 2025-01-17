#include <stdio.h>
#include <stdbool.h>

void readArray(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nEnter element with index %d - ", i);
        scanf("%d", &a[i]);
    }
}
void printArray(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%4d", i[a]);
    }
}
void linearSearch(int a[], int n, int key)
{
    int i;
    bool found;
    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            printf("\nElement %d found at index %d", key, i);
            found = 1;
        }
    }
    if (found == 0)
    {
        printf("Element not found.");
    }
    
}

void main()
{
    int a[8], key;
    readArray(a, 8);
    printArray(a, 8);

    printf("\nEnter the element to find - ");
    scanf("%d", &key);
    linearSearch(a, 8, key);
}