/* This programme is prepared by Muhammad Danish on 20/11/2023.
This programme take input of an array & array's size then display
the array without duplicate elements. */

#include <stdio.h>
void removeDuplicates(int arr[], int size); // Function prototype

// main function
int main()
{
    int size;

    // input of array from user
    printf("\nEnter the size of the array: ");
    scanf("%d", &size);
    int numbers[size];
    
    printf("Enter the elements of array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &numbers[i]);
    }

    removeDuplicates(numbers, size); // function call

    return 0;
}

// function definition
void removeDuplicates(int arr[], int size)
{
    int previous, next;

    printf("\nArray after removing duplicates:\n");
    for (int i = 0; i < size; i++)
    {
        previous = arr[i];
        next = arr[i + 1];

        if (next == previous)
        {
            arr[i] = arr[i + 1];
            arr[i+1] = arr[i];

        }
        else
        {
            printf("%d ", arr[i]);
        }
    }
}
