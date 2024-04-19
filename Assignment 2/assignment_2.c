#include <stdio.h>
// Function Prototypes:
int findLargest();
int findSmallest();
int findSum();
float findAverage();

// Main Fnction:
int main()
{
    int choice;
    char ch;
    do
    {
        // Display Menu for user's choice
        printf("Menu:\n");
        printf("1. Find Largest\n2. Find Smallest\n");
        printf("3. Find Sum\n4. Find Average\n");
        printf("5. Exit\n\n");

        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);
        // Use of switch for Function Call
        switch (choice)
        {
        case 1:
            printf("The largest number is %d", findLargest());
            break;
        case 2:
            printf("The smallest number is %d", findSmallest());
            break;
        case 3:
            printf("The sum of given numbers is: %d", findSum());
            break;
        case 4:
            printf("The average is: %.2f", findAverage());
            break;
        case 5:
            printf("Terminating the program...");
            return 0;
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
    printf("End program...");
    return 0;
}

// Functions Definitions
// 1. findLargest function definition:
int findLargest()
{
    int max = -32768, num;
    printf("Enter integers to find the Largest integer (-1 to finish):\n");
    do
    {
        printf("Enter an integer: ");
        scanf("%d", &num);
        if (num > max)
        {
            max = num;
        }
    } while (num != -1);
    return max;
}

// 2. findSmallest function definition:
int findSmallest()
{
    int min = __INT16_MAX__, num = min;
    printf("Enter integers to find the Smallest integer (-1 to finish):\n");
    do
    {
        if (num < min)
        {
            min = num;
        }
        printf("Enter an integer: ");
        scanf("%d", &num);
    } while (num != -1);
    return min;
}

// 3. findSum function definition:
int findSum()
{
    int num = 0, sum = 0;
    printf("Enter integers to find there Sum (-1 to finish):\n");
    do
    {
        sum += num;
        printf("Enter a number:");
        scanf("%d", &num);
    } while (num != -1);
    return sum;
}
// 4. findAverage function definition:
float findAverage()
{
    int num = 0, count = -1, sum = 0;
    do
    {
        sum += num;
        count++;
        printf("Enter an integer: ");
        scanf("%d", &num);
    } while (num != -1);
    return (float)sum / count;
}