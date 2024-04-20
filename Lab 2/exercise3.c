// Exercise 3:
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a < b && a < c && b < c)
        printf("%d %d %d", a, b, c);
    else if (a < b && a < c && c > b)
        printf("%d %d %d", a, c, b);
    else if (b < a && b < c && a < c)
        printf("%d %d %d", b, a, c);
    else if (b < a && b < c && c < a)
        printf("%d %d %d", b, c, a);
    else if (c < a && c < b && a < b)
        printf("%d %d %d", c, a, b);
    else if (c < a && c < b && b < a)
        printf("%d %d %d", c, b, a);
        
    return 0;
}