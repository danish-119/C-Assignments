// Exercise 5:
#include <stdio.h>
int main()
{
    int number;
    for (int count = 0; count < 5; count++)
    {
        printf("\nEnter the number:");
        scanf("%d", &number);
        if (number % 2 == 0)
        {
            printf("Even");
        }
        else if (number % 2 == 1)
        {
            printf("Odd");
        }
        else
            printf("Syntax Error");
    }
    return 0;
}