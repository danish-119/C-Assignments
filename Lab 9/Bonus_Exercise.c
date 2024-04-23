#include <stdio.h>
void outputMatrix(int size, int matrix[][size]);

int main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size][size];

    outputMatrix(size, arr);

    return 0;
}

// function to print matrix
void outputMatrix(int size, int matrix[][size])
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == j)
            {
                matrix[i][j] = 1;
                printf("%d\t", matrix[i][j]);
            }
            else
            {
                matrix[i][j] = 0;
                printf("%d\t", matrix[i][j]);
            }
        }
        printf("\n");
    }
}