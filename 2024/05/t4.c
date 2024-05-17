#include <stdio.h>
#include <stdlib.h>

void sort(int *arr, int n);
void diagonalSort(int **mat, int m, int n);
void printMatrix(int **mat, int m, int n);

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);

    int **mat = (int **)malloc(m * sizeof(int *));
    for (int i = 0; i < m; ++i)
    {
        mat[i] = (int *)malloc(n * sizeof(int));
        for (int j = 0; j < n; ++j)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    diagonalSort(mat, m, n);

    printMatrix(mat, m, n);

    for (int i = 0; i < m; ++i)
    {
        free(mat[i]);
    }
    free(mat);

    return 0;
}

void sort(int *arr, int n)
{
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void diagonalSort(int **mat, int m, int n)
{
    for (int col = 0; col < n; ++col)
    {
        int row = 0;
        int start_col = col;
        int diagonal_length = 0;
        while (row < m && start_col < n)
        {
            diagonal_length++;
            row++;
            start_col++;
        }
        int *diagonal = (int *)malloc(diagonal_length * sizeof(int));
        row = 0;
        start_col = col;
        for (int i = 0; i < diagonal_length; ++i)
        {
            diagonal[i] = mat[row][start_col];
            row++;
            start_col++;
        }
        sort(diagonal, diagonal_length);
        row = 0;
        start_col = col;
        for (int i = 0; i < diagonal_length; ++i)
        {
            mat[row][start_col] = diagonal[i];
            row++;
            start_col++;
        }
        free(diagonal);
    }

    for (int row = 1; row < m; ++row)
    {
        int col = 0;
        int start_row = row;
        int diagonal_length = 0;
        while (start_row < m && col < n)
        {
            diagonal_length++;
            start_row++;
            col++;
        }
        int *diagonal = (int *)malloc(diagonal_length * sizeof(int));
        col = 0;
        start_row = row;
        for (int i = 0; i < diagonal_length; ++i)
        {
            diagonal[i] = mat[start_row][col];
            start_row++;
            col++;
        }
        sort(diagonal, diagonal_length);
        col = 0;
        start_row = row;
        for (int i = 0; i < diagonal_length; ++i)
        {
            mat[start_row][col] = diagonal[i];
            start_row++;
            col++;
        }
        free(diagonal);
    }
}

void printMatrix(int **mat, int m, int n)
{
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            printf("%d", mat[i][j]);
            if (j < n - 1)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}