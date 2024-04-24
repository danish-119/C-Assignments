#include <stdio.h>

// Define the matrix struct
typedef struct
{
    int rows;
    int columns;
    int data[10][10];
} Matrix;

// Function prototypes
void InputMatrix(Matrix *matrix);
Matrix AddMatrix(const Matrix *m1, const Matrix *m2);

int main()
{
    Matrix matrix1, matrix2, matrix3;

    // Input matrices 1 and 2
    printf("Input for Matrix 1:\n");
    InputMatrix(&matrix1);

    printf("\nInput for Matrix 2:\n");
    InputMatrix(&matrix2);

    // Add matrices 1 and 2
    matrix3 = AddMatrix(&matrix1, &matrix2);

    // Display the resultant matrix
    printf("\nResultant Matrix (Matrix 1 + Matrix 2):\n");
    for (int i = 0; i < matrix3.rows; i++)
    {
        for (int j = 0; j < matrix3.columns; j++)
        {
            printf("%d\t", matrix3.data[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// Function to input matrix
void InputMatrix(Matrix *matrix)
{
    printf("Enter the number of rows and columns (separated by spaces): ");
    scanf("%d %d", &matrix->rows, &matrix->columns);

    printf("Enter matrix data:\n");
    for (int i = 0; i < matrix->rows; i++)
    {
        for (int j = 0; j < matrix->columns; j++)
        {
            scanf("%d", &matrix->data[i][j]);
        }
    }
}

// Function to add two matrices
Matrix AddMatrix(const Matrix *m1, const Matrix *m2)
{
    Matrix result;

    // Ensure matrices have the same dimensions for addition
    if (m1->rows != m2->rows || m1->columns != m2->columns)
    {
        printf("Error: Matrices must have the same dimensions for addition.\n");
        // Set result dimensions to zero
        result.rows = result.columns = 0;
        return result;
    }

    result.rows = m1->rows;
    result.columns = m1->columns;

    // Perform matrix addition
    for (int i = 0; i < result.rows; i++)
    {
        for (int j = 0; j < result.columns; j++)
        {
            result.data[i][j] = m1->data[i][j] + m2->data[i][j];
        }
    }

    return result;
}
