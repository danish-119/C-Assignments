// Exercise 4:
#include <stdio.h>
int main()
{
    int number, divisor = 1000, digit;
    // Continue looping until a valid 4-digit number is entered
    while (1)
    {
        printf("Enter a 4 digit number: ");
        scanf("%d", &number);

        if (number >= 1000 && number <= 9999)
        {
            printf("Output is: ");
            // Extract and print each digit of the 4-digit number
            while (divisor > 0)
            {
                digit = number / divisor;
                printf("%d", digit);
                number = number % divisor;
                divisor /= 10;
                // Print space between digits if not the last digit
                if (divisor > 0)
                {
                    printf("   ");
                }
            }
            // Exit the loop once a valid number is processed
            printf("\n");
            break;
        }
        // If an invalid number is entered, continue to prompt for a new one
        else
        {
            continue;
        }
    }
    return 0;
}