#include <stdio.h>
#include <stdbool.h>

void readMatrix(float a[10][10], int rows, int coloumns)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < coloumns; j++)
        {
            printf("\nEnter element (%d, %d)", i, j);
            scanf("%f", &a[i][j]);
        }
    }
}

void printMatrix(float a[10][10], int rows, int coloumns)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < coloumns; j++)
        {
            printf("%8.2f", a[i][j]);
        }
        printf("\n");
    }
}

float largestElement(float a[10][10], int rows, int coloumns)
{
    float max = a[0][0];
    int i,j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < coloumns; j++)
        {
            if (a[i][j] >= max)
            {
                max = a[i][j];
            }
            
        }
    }
    return max;
}

void main()
{
    float a[4][4];
    readMatrix(a,4,4);
    printMatrix(a,4,4);
    printf("\n\nThe largest element is - %.2f",largestElement(a,4,4));
}