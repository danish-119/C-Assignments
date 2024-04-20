// Exercise 4:
#include <stdio.h>
int main()
{
    int a, b, c, n;

    printf("Enter any three digit number: ");
    scanf("%d", &n);

    a = n % 10;
    n = n / 10;
    b = n % 10;
    n = n / 10;
    c = n;

    printf("The reverse number is %d%d%d\n", a, b, c);

    return 0;
}