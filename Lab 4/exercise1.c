// Exercise 1:
// Part A:
#include <stdio.h>
int main()
{
    int count = 1;
    while (count <= 100)
    {
        printf("%d\n", count);
        count++;
    }
    return 0;
}

// Part B:
#include <stdio.h>
int main()
{
    int count = 100;
    while (count > 0)
    {
        printf("%d, ", count);
        count--;
    }
    return 0;
}

// Part C:
#include <stdio.h>
int main()
{
    int count = 20;
    while (count > 0)
    {
        printf("%d, ", count);
        count -= 2;
    }
    return 0;
}

// Part D:
#include <stdio.h>
int main()
{
    int count = 2;
    while (count <= 20)
    {
        printf("%d, ", count);
        count += 3;
    }
    return 0;
}

// Part E:
#include <stdio.h>
int main()
{
    int count = 99;
    while (count >= 0)
    {
        printf("%d\n", count);
        count -= 11;
    }
    return 0;
}