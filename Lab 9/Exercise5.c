#include <stdio.h>
// function prototype
void inputMatrix(int rows, int cols, int matrix[rows][cols]);
void addMatrices(int rows, int cols, int matrix1[rows][cols], int matrix2[rows][cols], int result[rows][cols]);
void outputMatrix(int rows, int cols, int matrix[rows][cols]);

// main function
int main()
{
    int rows, cols;
    printf("Enter the number of rows of array: ");
    scanf("%d", &rows);
    printf("Enter the number of columns of array: ");
    scanf("%d", &cols);

    int arr1[rows][cols];
    int arr2[rows][cols];
    int arr3[rows][cols];

    // function call
    printf("\n");
    inputMatrix(rows, cols, arr1);
    printf("\n");
    inputMatrix(rows, cols, arr2);

    addMatrices(rows, cols, arr1, arr2, arr3);

    printf("\nMatrix 1:\n");
    outputMatrix(rows, cols, arr1);
    printf("\n");
    printf("\nMatrix 2:\n");
    outputMatrix(rows, cols, arr2);
    printf("\nSum:\n");
    outputMatrix(rows, cols, arr3);

    return 0;
}

// function to take input
void inputMatrix(int rows, int cols, int matrix[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Enter the value of row %d & column %d: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// function to print matrix
void outputMatrix(int rows, int cols, int matrix[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

// function for sum of matrix
void addMatrices(int rows, int cols, int matrix1[rows][cols], int matrix2[rows][cols], int result[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}