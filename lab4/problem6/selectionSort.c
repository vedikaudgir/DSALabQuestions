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

void selectionSort(float a[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        int min = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            float swap = a[i];
            a[i] = a[min];
            a[min] = swap;
        }
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

    selectionSort(a,n);
    printf("\n\nThe sorted array is - ");
    printArray(a, n);
}