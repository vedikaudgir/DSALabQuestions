#include <stdio.h>

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

void insertElement(int a[], int n, int element, int index)
{
    int i;
    for (i = n + 1; i > index; i--)
    {
        a[i] = a[i - 1];
    }
    a[i] = element;
    printf("\nThe modified array is - ");
    printArray(a, n + 1);
}

void main()
{
    int a[50], index, data, n;
    printf("\nEnter the number of elements - ");
    scanf("%d", &n);

    readArray(a, n);
    printArray(a, n);

    printf("\nEnter the data to insert - ");
    scanf("%d", &data);

    printf("\nEnter the index to be inserted at - ");
    scanf("%d", &index);

    insertElement(a, n, data, index);
}