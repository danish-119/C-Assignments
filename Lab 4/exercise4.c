// Exercise 4:
#include <stdio.h>
int main()
{
    int number, fact = 1;
    printf("Enter a number:");
    scanf("%d", &number);
    while (number >= 1)
    {
        fact = number * fact;
        number--;
    }
    printf("The factorial of given number is: %d", fact);
    return 0;
}