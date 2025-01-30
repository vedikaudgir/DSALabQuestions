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

void insertElement(int a[], int n, int element, int index)
{
    int i;
    for (i = n + 1; i > index; i--)
    {
        a[i] = a[i - 1];
    }
    a[i] = element;
    n++;
    printf("\nThe modified array is - ");
    printArray(a, n);
}
void deleteElement(int a[], int n, int index)
{
    int i;
    for (i = index; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
    printf("\nThe modified array is - ");
    printArray(a, n);
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
    int c;

    printf("\n Enter 1 to insert elements.");
    printf("\n Enter 2 to delete elements.");
    printf("\n Enter 3 to concattenate two arrays.");
    printf("\n Enter 4 to reverse array.");
    printf("\n Enter 5 to display array.");
    printf("\n Enter 6 to merge sorted array.");

    scanf("%d", &c);

    switch (c)
    {
    case 1:
    {
        int a[50], index, data, n;
        printf("\nEnter the number of elements - ");
        scanf("%d", &n);

        readArray(a, n);
        printArray(a, n);

        printf("\nEnter the element to insert - ");
        scanf("%d", &data);

        printf("\nEnter the index to be inserted at - ");
        scanf("%d", &index);

        while (index > n + 1 || index < 0)
        {
            printf("\nInvalid Index!");
            printf("\nEnter the index to be inserted at - ");
            scanf("%d", &index);
        }

        insertElement(a, n, data, index);
        break;
    }

    case 2:
    {
        int a[50], index, n;
        printf("\nEnter the number of elements - ");
        scanf("%d", &n);

        readArray(a, n);
        printArray(a, n);

        while (index > n + 1 || index < 0)
        {
            printf("\nInvalid Index!");
            printf("\nEnter the index to be deleted - ");
            scanf("%d", &index);
        }

        deleteElement(a, n, index);
        break;
    }

    case 3:
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
        break;
    }

    case 4:
    {
        int a[50], index, n;
        printf("\nEnter the number of elements - ");
        scanf("%d", &n);

        readArray(a, n);
        printArray(a, n);

        reverseArray(a, n);
        break;
    }

    case 5:
    {
        int a[50],n;
        printf("\nEnter the number of elements - ");
        scanf("%d", &n);
        readArray(a,n);
        printArray(a,n);
    }

    case 6:
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
        break;
    }
    default:
        break;
    }
}