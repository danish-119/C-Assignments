#include <stdio.h>
// function prototype
void inputMatrix(int rows, int cols, int matrix[rows][cols]);
void outputMatrix(int rows, int cols, int matrix[rows][cols]);

// main function
int main()
{
    int rows, cols;
    printf("Enter the number of rows of array: ");
    scanf("%d", &rows);
    printf("Enter the number of columns of array: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    // function call
    inputMatrix(rows, cols, arr);
    printf("\n");
    outputMatrix(rows, cols, arr);



    return 0;
}

// function to take input
void inputMatrix(int rows, int cols, int matrix[rows][cols])
{
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            printf("Enter the value of row %d & column %d: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
}


// function to print matrix
void outputMatrix(int rows, int cols, int matrix[rows][cols])
{
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            printf("%d\t", matrix[i][j]);
    
        }
        printf("\n");
    }
}

