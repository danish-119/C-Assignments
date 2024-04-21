// Exercise 2:
#include <stdio.h>
int main()
{
    int count = 0;
    int sum = 0;
    while (count <= 30)
    {
        sum = sum + count;
        count += 2;
    }
    printf("The sum of even integers from 1 to 30 is: %d", sum);
    return 0;
}