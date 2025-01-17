#include <stdio.h>
#include <stdbool.h>

void readMatrix(int a[10][10], int rows, int coloumns)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < coloumns; j++)
        {
            printf("\nEnter element (%d, %d)", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

void printMatrix(int a[10][10], int rows, int coloumns)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < coloumns; j++)
        {
            printf("%8d", a[i][j]);
        }
        printf("\n");
    }
}

void sumOfRows(int a[10][10], int rows, int coloumns)
{
    int rowSum[10] = {0}, i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < coloumns; j++)
        {
            rowSum[i] += a[i][j];
        }
        printf("\nThe sum of elements of row %d is %d", i, rowSum[i]);
    }
}
void sumOfColoumns(int a[10][10], int rows, int coloumns)
{
    int coloumnSum[10] = {0}, i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < coloumns; j++)
        {
            coloumnSum[i] += a[j][i];
        }
        printf("\nThe sum of elements of coloumn %d is %d", i, coloumnSum[i]);
    }
}

int sumOfBoundaryElements(int a[10][10], int rows, int coloumns)
{
    int i, j, sum = 0;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < coloumns; j++)
        {
            if ((i == 0) || (j == coloumns - 1) || (i == rows - 1) || (j == 0))
            {
                sum += a[i][j];
            }
        }
    }
    return sum;
}
void main()
{
    int a[10][10];
    readMatrix(a, 4, 4);
    printMatrix(a, 4, 4);
    printf("The sum of boundary elements is - %d",sumOfBoundaryElements(a, 4, 4));
}