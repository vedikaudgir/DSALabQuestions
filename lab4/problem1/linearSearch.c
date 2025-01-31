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
    printf("\n");
    for (i = 0; i < n; i++)
    {
        printf("%8d", i[a]);
    }
}

void linearSearch(int a[], int n, int key, int startIndex)
{
    if (startIndex >= n)
    {
        printf("Element not found!");
    }

    if (a[startIndex] == key)
    {
        printf("\nElement found at Index %d", startIndex);
        return;
    }
    else
    {
        linearSearch(a, n, key, startIndex + 1);
    }
}

void main()
{
    int a[10], key;
    readArray(a, 10);
    printArray(a, 10);

    printf("\nEnter key to find - ");
    scanf("%d", &key);

    linearSearch(a, 9, key, 0);
}