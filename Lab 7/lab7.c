#include <stdio.h>
// function prototype
int min_array(int input[]);
int sum_array(int input[]);
int dot_product(int a[], int b[]);


int main()
{
    int n, num1[5], num2[5];

    // using loop for input of numbers from user
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the number %d of 1st array: ", i + 1);
        scanf("%d", &num1[i]);
    }
    // Display the output
    printf("\nMinimum number of array is: %d\n", min_array(num1));
    printf("Sum of numbers of array is: %d\n\n", sum_array(num1));
    // using loop for input of numbers from user
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the number %d of 2nd array: ", i + 1);
        scanf("%d", &num2[i]);
    }
    // Display the output
    printf("\nDot product of 2 arrays is: %d\n", dot_product(num1, num2));

    return 0;
}

// function definition
// 2. for minimum number
int min_array(int input[5])
{
    int min = input[0];

    for (int i = 0; i < 5; i++)
    {

        if (input[i] < min)
        {
            min = input[i];
        }
    }
    return min;
}

// 3. for sum of array
int sum_array(int input[])
{
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        sum = sum + input[i];
    }

    return sum;
}

// 4. for product of array
int dot_product(int a[], int b[])
 {
    int sum=0;
    int result = 0;

    for (int i = 0; i < 5; i++)
    {
        result += a[i] * b[i];
    }

    return result;
 }