// Exercise 6:
#include <stdio.h>
int main()
{
    int minimum = 32767;
    int maximum = -32768;
    int number;
    for (int count = 0; count < 5; count++)
    {
        printf("Enter the %d Number: ", count + 1);
        scanf("%d", &number);
        if (number > maximum)
        {
            maximum = number;
        }
        if (number < minimum)
        {
            minimum = number;
        }
    }
    printf("Largest integer: %d\n", maximum);
    printf("Smallest integer: %d\n", minimum);

    return 0;
}