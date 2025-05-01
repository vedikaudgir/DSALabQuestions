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

int maxOfTwo(int a, int b)
{
    int max;
    max = a > b ? a : b;
    return max;
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
    return max;
}

void countingSort(int A[], int B[], int n, int k)
{
    int i, j;
    int C[k];

    for (i = 0; i < k; i++)
    {
        C[i] = 0;
    }
    for (j = 0; j < n; j++)
    {
        C[A[j]]++;
    }
    for (i = 1; i < k; i++)
    {
        C[i] += C[i - 1];
    }
    for (j = n; j > 0; j--)
    {
        B[C[A[j]]] = A[j];
        C[A[j]] = C[A[j]] - 1;
    }
}

void main()
{
    
}