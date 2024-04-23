#include <stdio.h>
// function prototype
void inputArrayUsingPointer(int n, int *arr);
void outputArrayUsingPointer(int n, int *arr);

// 
int main()
{
    int size;
    printf("Enter the szie of array: ");
    scanf("%d", &size);

    int arr[size];
    int *ptr = arr;

    // function call
    inputArrayUsingPointer(size, ptr);
    outputArrayUsingPointer(size, ptr);

    return 0;
}

void inputArrayUsingPointer(int n, int *arr)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value %d: ", i + 1);
        scanf("%d", arr + i);
    }
}

void outputArrayUsingPointer(int n, int *arr)
{
    for (int i = 0; i < n; i++)
    {
        printf("Value %d is: %d\n", i + 1, arr[i]);
    }
}