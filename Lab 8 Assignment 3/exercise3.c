/* This programme is prepared by Muhammad Danish on 20/11/2023.
This programme take input of two arrays from user and displays its union. */

#include <stdio.h>
void Union(int a[], int b[], int c[]); // function prototype

// main function
int main()
{
    int size;
    int c[20];

    // input of 1st array
    printf("\nEnter the size of 1st array: ");
    scanf("%d", &size);
    int a[size];

    printf("Enter the elements of array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    // input of 2nd array
    printf("\nEnter the size of the  2nd array: ");
    scanf("%d", &size);
    int b[size];

    printf("Enter the elements of array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &b[i]);
    }

    Union(a, b, c); // function call
    
    // displaying the value of array which stored union
    printf("Union:");
    for (int i = 0; i < 20; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}

// function definition
void Union(int a[], int b[], int c[])
{
}
