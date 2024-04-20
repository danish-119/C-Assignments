// Exercise 4:
#include <stdio.h>

int main()
{
    // By using third variable:
    printf("By using third variable:\n");
    int a = 5, b = 3;
    int c;
    c = a;
    a = b;
    b = c;

    printf("now,a=%d\nnow,b=%d\n", a, b);

    // Without using third variable:
    printf("Without using third variable:\n");
    int num1 = 10, num2 = 5;
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("now,num1=%d\nnow,num2=%d", num1, num2);

    return 0;
}
