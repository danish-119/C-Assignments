/* This programme is  prepared by  Muhammad Danish on 20/11/2023.
This programme take input from user array size, array elment, and
a key and check wheather the key  is found  in give array or not */

#include <stdio.h>
int search(int arr[], int n, int key); // Function prototype

// main function
int main()
{
    int size;
    int output;
    int num;

    // input of array from user
    printf("\nEnter the size of the array: ");
    scanf("%d", &size);
    int numbers[size];

    printf("Enter the elements of array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &numbers[i]);
    }
    
    // input the key which user want to find
    printf("Enter the key to search: ");
    scanf("%d", &num);

    output = search(numbers, size, num);  // function call

    // displaying the result according to process
    if (output == 1)
        printf("Key  %d is found in the array", num);
    else if (output == 0)
        printf("Key %d is not found in the array", num);

    return 0;
}

// function definition
int search(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
            return 1;
    }
    return 0;
}
