#include <stdio.h>

void readArray(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nEnter element - ");
        scanf("%d", &a[i]);
    }
}

void printArray(int a[], int n)
{
    int i;
    printf("\nThe array is - \n");
    for (i = 0; i < n; i++)
    {
        printf("%8d", a[i]);
    }
}

void swap(int *n1, int *n2)
{
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int setPivot(int a[], int start, int end)
{
    int p = a[start];
    int i = start;
    int j = end;

    while (i < j)
    {
        while (a[i] <= p && i <= end - 1)
        {
            i++;
        }
        while (a[j] > p && j >= start + 1)
        {
            j--;
        }
        if (i < j)
        {
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[start], &a[j]);
    return j;
}

void quickSort(int a[], int start, int end)
{
    if (start < end)
    {
        int newPivot = setPivot(a, start, end);

        quickSort(a, start, newPivot - 1);
        // printArray(a,5);
        quickSort(a, newPivot + 1, end);
        // printArray(a,5);
    }
}

void main()
{
    int a[10];

    readArray(a, 5);
    printArray(a, 5);
    quickSort(a, 0, 4);
    printArray(a, 5);
}