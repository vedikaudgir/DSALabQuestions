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

void bubbleSort(int a[], int n)
{
    if (n == 1)
    {
        return;
    }
    for (int j = 0; j < n - 1; j++)
    {
        if (a[j] > a[j + 1])
        {
            int swap = a[j];
            a[j] = a[j + 1];
            a[j + 1] = swap;
        }
    }
    bubbleSort(a, n - 1);
}

void main()
{
    int a[10], n;

    printf("Enter the number of elements in the array.");
    scanf("%d", &n);

    readArray(a, n);
    printArray(a, n);

    printf("\n\nSorted array is -\n");

    bubbleSort(a, n);

    printArray(a, n);
}