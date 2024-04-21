// Exercise 3:
#include <stdio.h>
int main()
{
    int count = 1;
    int product = 1;
    while (count < 20)
    {
        product = product * count;
        count += 2;
    }
    printf("The product of odd integers from 0 to 19 is: %d", product);
    return 0;
}