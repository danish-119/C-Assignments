// Exercise 5:
#include <stdio.h>

int main()
{
    int base = 5, vertical_height = 10;
    int a = 2, b = 3, c = 4;

    // Area of the triangle.
    int area = 0.5 * base * vertical_height;
    printf("Area:%d\n\n", area);

    // Perimeter of the triangle
    int perimeter = a + b + c;
    printf("Perimeter:%d", perimeter);

    return 0;
}