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

void mergeSubarrays(int a[], int start, int mid, int end)
{
    int i, j, k;
    int n1 = mid - start + 1;
    int n2 = end - mid;

    int array1[n1], array2[n2];

    for (i = 0; i < n1; i++)
    {
        array1[i] = a[start + i];
    }
    for (j = 0; j < n2; j++)
    {
        array2[j] = a[mid + j + 1];
    }

    i = 0;
    j = 0;
    k = start;
    while (i < n1 && j < n2)
    {
        if (array1[i] < array2[j])
        {
            a[k] = array1[i];
            i++;
        }
        else
        {
            a[k] = array2[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        a[k] = array1[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        a[k] = array2[j];
        j++;
        k++;
    }
}

void mergeSort(int a[], int start, int end)
{
    if (start < end)
    {
        int mid = start + ((end - start) / 2);

        printf("\nfirst time callled");
        printArray(a,5);
        mergeSort(a, start, mid);
        printf("\nsecond time callled");
        printArray(a,5);
        mergeSort(a, mid + 1, end);

        printf("\nsubarrays merged");
        printArray(a,5);
        mergeSubarrays(a, start, mid, end);
    }
}

void main()
{
    int a[10];

    readArray(a, 5);
    printArray(a, 5);
    mergeSort(a, 0, 4);
    printArray(a, 5);
}