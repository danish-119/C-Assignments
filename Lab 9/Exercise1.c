#include <stdio.h>
// function prototype
void inputArray(int n, int arr[]);
void outputArray(int n, int arr[]);

// main function
int main()
{
    int size;
    printf("Enter the szie of array: ");
    scanf("%d", &size);

    int arr[size];

    // function call
    inputArray(size, arr);
    outputArray(size, arr);

    return 0;
}

// function to take input
void inputArray(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

// function to give ouput
void outputArray(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        printf("Value %d is: %d\n", i + 1, arr[i]);
    }
}
