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
    printf("\n");
    for (i = 0; i < n; i++)
    {
        printf("%8d", i[a]);
    }
}

void binarySearch(int a[], int key, int startIndex, int lastIndex)
{
    int midIndex = (startIndex + lastIndex) / 2;

    if (startIndex > lastIndex)
    {
        printf("\nElement not found.");
        return;
    }

    printf("%d\n%d\n",startIndex,lastIndex);
    
    if (a[midIndex] == key)
    {
        printf("\nElement found at index %d.", midIndex);
    }
    else if (a[midIndex] > key)
    {
        startIndex = midIndex + 1;
        binarySearch(a, key, startIndex, lastIndex);
    }
    else
    {
        lastIndex = midIndex - 1;
        binarySearch(a, key, startIndex, lastIndex);
    }
}

void main()
{
    int a[10], key;
    readArray(a, 10);
    printArray(a, 10);

    printf("\nEnter key to find - ");
    scanf("%d", &key);

    binarySearch(a, key, 0, 9);
}