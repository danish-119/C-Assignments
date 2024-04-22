#include <stdio.h>

// Function prototypes
int add(int num1, int num2);
int subtract(int num1, int num2);
int multiply(int num1, int num2);
float divide(int num1, int num2);
// Main Function
int main()
{
    int num1, num2;
    char choice, ch;
    do
    {
        printf("Enter 1st integer: ");
        scanf("%d", &num1);
        printf("Enter 2nd integer: ");
        scanf("%d", &num2);
        printf("Enter an operator (+, -, *, /): ");
        // use of switch to do operation according to users choice
        scanf(" %c", &choice);
        switch (choice)
        {
        case '+':
            printf("Result: %d\n", add(num1, num2));
            break;
        case '-':
            printf("Result: %d\n", subtract(num1, num2));
            break;
        case '*':
            printf("Result: %d\n", multiply(num1, num2));
            break;
        case '/':
            printf("Result: %.2f\n", divide(num1, num2));
            break;
        default:
            printf("Invalid operator\n");
        }
        printf("\n\nDo you want to continue? (y/n) :");
        scanf(" %c", &ch);
        // Use of if-else statement according to user's input
        if (ch == 'y')
        {
            continue;
        }
        else if (ch == 'n')
        {
            break;
        }
        else
        {
            printf("Program Terminated...");
            return 0;
        }
    } while (1);

    return 0;
}

// Function to add two integers
int add(int num1, int num2)
{
    return num1 + num2;
}

// Function to subtract two integers
int subtract(int num1, int num2)
{
    return num1 - num2;
}

// Function to multiply two integers
int multiply(int num1, int num2)
{
    return num1 * num2;
}

// Function to divide two numbers
float divide(int num1, int num2)
{
    if (num2 == 0)
    {
        printf("Error: Division by zero is not allowed\n");
        return 0.0;
    }
    return num1 / num2;
}
