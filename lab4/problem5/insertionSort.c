#include <stdio.h>

void readArray(float a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nEnter element with index %d - ", i);
        scanf("%f", &a[i]);
    }
}

void printArray(float a[], int n)
{
    int i;
    printf("\n");
    for (i = 0; i < n; i++)
    {
        printf("%8.2f", i[a]);
    }
}

void insertionSort(float a[], int n)
{
    int i, j;
    for (i = 1; i <= n - 1; i++)
    {
        float temp = a[i];

        for (j = i - 1; (j >= 0 && a[j] > temp); j--)
        {
            a[j + 1] = a[j];
        }

        a[j + 1] = temp;
    }
}
void main()
{
    float a[10];
    int n;

    printf("Enter the number of elements in the array.");
    scanf("%d", &n);

    readArray(a, n);
    printf("\n\nThe array is - ");
    printArray(a, n);

    insertionSort(a,n);
    printf("\n\nThe sorted array is - ");
    printArray(a, n);
}