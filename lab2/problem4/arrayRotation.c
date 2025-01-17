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
    for (i = 0; i < n; i++)
    {
        printf("%4d", i[a]);
    }
}

void main()
{
    int n, a[8], temp, i, j, direction;

    readArray(a, 8);
    printArray(a, 8);

    printf("\nEnter number of rotations - ");
    scanf("%d", &n);

    printf("\nEnter 0 to rotate clockwise and 1 to rotate anticlockwise.");
    scanf("%d", &direction);

    switch (direction)
    {
    case 0:
    {
        for (i = 0; i <= n; i++)
        {
            temp = a[7];
            for (j = 7; j < 0; j--)
            {
                a[j] = a[j - 1];
            }
            a[0] = temp;
        }

        printArray(a, 8);
        break;
    }
    case 1:
    {
        for (i = 0; i <= n; i++)
        {
            temp = a[0];
            for (j = 0; j < 8; j++)
            {
                a[j] = a[j + 1];
            }
            a[7] = temp;
        }

        printArray(a, 8);
        break;
    }
    default:
        printf("Enter valid input!");
        main();
    }
}
