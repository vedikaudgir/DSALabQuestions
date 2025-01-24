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

void deleteElement(int a[], int n, int index)
{
    int i;
    for (i = index; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
    printf("\nThe modified array is - ");
    printArray(a, n);
}

void main()
{
    int a[50], index, n;
    printf("\nEnter the number of elements - ");
    scanf("%d", &n);

    readArray(a, n);
    printArray(a, n);

    while (index > n + 1 || index < 0)
    {
        printf("\nInvalid Index!");
        printf("\nEnter the index to be deleted - ");
        scanf("%d", &index);
    }

    deleteElement(a, n, index);
}