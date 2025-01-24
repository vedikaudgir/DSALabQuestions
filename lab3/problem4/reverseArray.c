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

void reverseArray(int a[], int n)
{
    int i, b[n];
    for (i = 0; i < n; i++)
    {
        b[n - i - 1] = a[i];
    }
    
    printf("\nThe reversed array is - ");
    printArray(b, n);
}

void main()
{
    int a[50], index, n;
    printf("\nEnter the number of elements - ");
    scanf("%d", &n);

    readArray(a, n);
    printArray(a, n);

    reverseArray(a, n);
}