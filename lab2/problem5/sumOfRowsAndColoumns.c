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
    int rowSum[10]={0},i,j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < coloumns; j++)
        {
            rowSum[i] += a[i][j];
        }
        printf("\nThe sum of elements of row %d is %d",i,rowSum[i]);
    }
    
}
void sumOfColoumns(int a[10][10], int rows, int coloumns)
{
    int coloumnSum[10]={0},i,j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < coloumns; j++)
        {
            coloumnSum[i] += a[j][i];
        }
        printf("\nThe sum of elements of coloumn %d is %d",i,coloumnSum[i]);
    }
    
}

void main()
{
    int a[10][10];
    readMatrix(a,3,3);
    printMatrix(a,3,3);
    sumOfRows(a,3,3);
    sumOfColoumns(a,3,3);
}