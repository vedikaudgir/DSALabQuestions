#include <stdio.h>
#include <stdbool.h>

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
    for (i = 0; i < n; i++)
    {
        printf("%4d", i[a]);
    }
}

void bubbleSearch(int a[], int n)
{
    int i, j, swap;
    bool flag;
    for (i = 0; i < n; i++)
    {
        flag = 0;
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap = a[j];
                a[j] = a[j + 1];
                a[j + 1] = swap;
                flag = 1;
            }
        }
        if (flag = 0)
        {
            break;
        }
    }
}
void binarySearch(int a[], int key, int firstIndex, int lastIndex)
{
    int mid = (firstIndex + lastIndex) / 2;

    if (a[mid] == key)
    {
        printf("Element %d found at index %d", key, mid);
    }
    else if (a[mid] < key)
    {
        binarySearch(a, key, firstIndex, (mid - 1));
    }
    else
    {
        binarySearch(a, key, (mid + 1), (lastIndex));
    }
    if (firstIndex == lastIndex)
    {
        printf("ELEMENT NOT FOUND");
        return;
    }
}

void main()
{
    int a[8], key;
    readArray(a, 8);
    printArray(a, 8);

    printf("\nEnter the element to find - ");
    scanf("%d", &key);
    binarySearch(a, key, 0, 8);    
}