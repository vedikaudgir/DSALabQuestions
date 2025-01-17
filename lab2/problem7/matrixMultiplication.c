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

void matrixMultiplication(int a[10][10], int b[10][10], int row1, int coloumn1, int row2, int coloumn2, int mul[10][10])
{
    if (row2 != coloumn1)
    {
        printf("CANNOT BE MULTIPLIED!!!");
        return;
    }
    
    int i, j, k;
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < coloumn2; j++)
        {

            for (k = 0; k < coloumn1; k++)
            {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void main()
{
    int a[10][10], b[10][10], m[10][10] = {0};
    readMatrix(a, 2, 2);
    printMatrix(a, 2, 2);
    readMatrix(b, 2, 2);
    printMatrix(b, 2, 2);

    matrixMultiplication(a, b, 2, 2, 2, 2, m);
    printf("\n\nThe multiplied matrices are - \n");
    printMatrix(m, 2, 2);
}