// Exercise 2:
#include <stdio.h>
int main()
{
    int budget, T_expenses = 0;
    char character_code = 'a';
    // Initialize individual expense variables
    int rent_expense = 0, internet_expense = 0, groceries_expense = 0, utilities_expense = 0, clothing_expense = 0;
    // Prompt the user to enter the budget
    printf("Enter your budget: ");
    scanf("%d", &budget);
    printf("Enter your expenses for the month. Press 'E' to finish.\n");
    printf("[R] Rent, [I] Internet, [G] Groceries, [U] Utilities, [C] Clothing\n");
    // Continue looping until 'E' is entered
    while (character_code != 'E')
    {
        fflush(stdin);
        printf("Enter the character code: ");
        scanf(" %c", &character_code);
        // Using switch to get expenses and add in total expense
        switch (character_code)
        {
        case 'R':
            printf("Enter the amount spent on Rent: ");
            scanf("%d", &rent_expense);
            T_expenses += rent_expense;
            break;
        case 'I':
            printf("Enter the amount spent on Internet: ");
            scanf("%d", &internet_expense);
            T_expenses += internet_expense;
            break;
        case 'G':
            printf("Enter the amount spent on Groceries: ");
            scanf("%d", &groceries_expense);
            T_expenses += groceries_expense;
            break;
        case 'U':
            printf("Enter the amount spent on Utilities: ");
            scanf("%d", &utilities_expense);
            T_expenses += utilities_expense;
            break;
        case 'C':
            printf("Enter the amount spent on Clothing: ");
            scanf("%d", &clothing_expense);
            T_expenses += clothing_expense;
            break;
        }
    }
    printf("Total amount spent this month: %d\n", T_expenses);
    // Check if the expenses exceed, match, or are below the budget
    if (T_expenses > budget)
    {
        printf("You have exceeded your budget.\n");
    }
    else if (T_expenses < budget)
    {
        printf("You have not exceeded your budget.\n");
    }
    else
    {
        printf("You have exactly matched your budget.\n");
    }
    return 0;
}