//Program to check whether a matrix is identity matrix or not.
//Author - Vedika Udgir 

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

void checkIdentity(int a[10][10], int rows, int coloumns)
{
    int i, j;
    bool flag = 1;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < coloumns; j++)
        {
            if ((i == j && a[i][j] != 1) || (i != j && a[i][j] != 0))
            {
                flag = 0;
                break;
            }
        }
    }

    if (flag == 1)
    {
        printf("\nIdentity Matrice");
    }
    else
    {
        printf("\nNot an Identity Matrice");
    }
}

void main()
{
    int a[10][10];
    readMatrix(a,3,3);
    printMatrix(a,3,3);
    checkIdentity(a,3,3);
}