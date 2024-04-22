#include <stdio.h>
// Function Prototype
int GCD(int x, int y);
// Main Function
int main()
{
    int x, y;
    printf("Enter 1st integer: ");
    scanf("%d", &x);
    printf("Enter 2nd integer: ");
    scanf("%d", &y);

    printf("The GCD of %d and %d is %d\n", x, y, GCD(x, y));

    return 0;
}

// function definition for GCD
int GCD(int x, int y)
{
    int temp;
    if (y == 0)
    {
        return x;
    }
    else
    {
        while (y != 0)
    {
        int temp = y;
        y = x % y;
        x = temp;
    }
    return x;
    }
}
