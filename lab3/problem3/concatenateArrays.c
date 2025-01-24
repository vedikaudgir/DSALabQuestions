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

void concatenateArray(int a[], int n1, int b[], int n2)
{
    int i;
    for (i = 0; i < n2; i++)
    {
        a[n1 + i] = b[i];
    }
    n1 += n2;
    printf("\nConcatenated array is - ");
    printArray(a, n1);
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

    concatenateArray(a, n1, b, n2);
}