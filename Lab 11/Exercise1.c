#include <stdio.h>

typedef struct
{
    float real;
    float imaginary;
} complex;

// Function prototypes
void Input(complex *num);
complex Add(complex num1, complex num2);
complex Multiply(complex num1, complex num2);
complex Subtract(complex num1, complex num2);
void PrintNumber(complex num);

int main()
{
    complex num1, num2, result;
    int choice;

    do
    {
        printf("\nMenu:\n");
        printf("1. Input\n");
        printf("2. Add\n");
        printf("3. Subtract\n");
        printf("4. Multiply\n");
        printf("5. PrintNumber\n");
        printf("0. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter values for complex number 1:\n");
            Input(&num1);
            printf("\nEnter values for complex number 2:\n");
            Input(&num2);
            break;
        case 2:
            result = Add(num1, num2);
            printf("\nResult of addition: ");
            PrintNumber(result);
            break;
        case 3:
            result = Subtract(num1, num2);
            printf("\nResult of subtraction: ");
            PrintNumber(result);
            break;
        case 4:
            result = Multiply(num1, num2);
            printf("\nResult of multiplication: ");
            PrintNumber(result);
            break;
        case 5:
            printf("\nComplex number 1: ");
            PrintNumber(num1);
            printf("Complex number 2: ");
            PrintNumber(num2);
            break;
        case 0:
            printf("\nExiting program.\n");
            break;
        default:
            printf("\nInvalid choice. Please try again.\n");
        }
    } while (choice != 0);

    return 0;
}

// Function to take input for real and imaginary parts of the complex number
void Input(complex *num)
{
    printf("Enter real part: ");
    scanf("%f", &num->real);
    printf("Enter imaginary part: ");
    scanf("%f", &num->imaginary);
}

// Function to perform complex number addition
complex Add(complex num1, complex num2)
{
    complex result;
    result.real = num1.real + num2.real;
    result.imaginary = num1.imaginary + num2.imaginary;
    return result;
}

// Function to perform complex number subtraction
complex Subtract(complex num1, complex num2)
{
    complex result;
    result.real = num1.real - num2.real;
    result.imaginary = num1.imaginary - num2.imaginary;
    return result;
}

// Function to perform complex number multiplication
complex Multiply(complex num1, complex num2)
{
    complex result;
    result.real = (num1.real * num2.real) - (num1.imaginary * num2.imaginary);
    result.imaginary = (num1.real * num2.imaginary) + (num1.imaginary * num2.real);
    return result;
}

// Function to print the complex number in the form a+ib
void PrintNumber(complex num)
{
    printf("%.2f + %.2fi\n", num.real, num.imaginary);
}