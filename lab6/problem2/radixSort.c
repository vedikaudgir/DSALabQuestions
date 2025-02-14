#include <stdio.h>

void readArray(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        do
        {
            printf("\nEnter element - ");
            scanf("%d", &a[i]);
        } while (a[i] < 0);
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
int maxInArray(int a[], int n)
{
    int i = 0, max = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] > a[max])
        {
            max = i;
        }
    }
    return a[max];
}
void countingSort(int A[], int n, int place)
{
    int output[n];
    for (int i = 0; i < n; i++)
    {
        output[i] = 0;
    }

    int k = maxInArray(A, n);
    int countArray[10] = {0};

    for (int i = 0; i < n; i++)
    {
        countArray[(A[i] / place) % 10]++;
    }
    for (int i = 1; i < 10; i++)
    {
        countArray[i] += countArray[i - 1];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        output[countArray[(A[i] / place) % 10] - 1] = A[i];
        countArray[(A[i] / place) % 10]--;
    }
    for (int i = 0; i < n; i++)
    {
        A[i] = output[i];
    }
}
void radixSort(int a[], int n)
{
    int maxElement = maxInArray(a, n);
    for (int i = 1; maxElement / i > 0; i *= 10)
    {
        countingSort(a, n, i);
    }
}

void main()
{
    int a[10];
    readArray(a, 10);
    printArray(a, 10);
    radixSort(a, 10);
    printArray(a, 10);
}