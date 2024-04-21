// Exercise 3:
#include <stdio.h>
int main()
{
    float sell = 0, salary = 200;
    // Prompt the user to enter the sales
    printf("\nEnter the sales in pounds (-1 to end):");
    scanf("%f", &sell);
    // Continue looping until -1 is entered
    while (sell != -1)
    {
        if (sell == 0)
        {
            salary = salary;
        }
        else
        {
            salary = salary + (sell * 0.09);
        }
        // Display the calculated salary
        printf("Salary is: %.2f", salary);
        // Prompt the user to enter the sales again
        printf("\nEnter the sales in pounds (-1 to end):");
        scanf("%f", &sell);
    }
    printf("Program Exited...");
    return 0;
}