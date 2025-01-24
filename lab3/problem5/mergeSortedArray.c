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

void mergeArray(int a[], int n1, int b[], int n2)
{
    int i = 0, ai = 0, bi = 0, c[n1 + n2];

    while (ai < n1 && bi < n2)
    {
        if (a[ai] < b[bi])
        {
            c[i++] = a[ai++];
        }
        else if (a[ai] > b[bi])
        {
            c[i++] = b[bi++];
        }
        else
        {
            c[i++] = a[ai++];
            c[i++] = b[bi++];
        }
    }

    while (ai < n1)
    {
        c[i++] = a[ai++];
    }

    while (bi < n2)
    {
        c[i++] = b[bi++];
    }

    printf("\nThe merged array is - ");
    printArray(c, n1 + n2);
}

void main()
{
    int a[50], b[50], index, n1, n2;
    printf("\nEnter the number of elements in array 1 - ");
    scanf("%d", &n1);
    readArray(a, n1);
    printArray(a, n1);

    printf("\nEnter the number of elements in array 2 - ");
    scanf("%d", &n2);
    readArray(b, n2);
    printArray(b, n2);

    mergeArray(a, n1, b, n2);
}