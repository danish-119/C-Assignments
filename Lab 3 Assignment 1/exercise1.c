// Exercise 1:
// This programme is prepared by Muhammad Danish on 02/10/2023.
// This is a programme of Bill Calculator.
#include <stdio.h>
int main()
{
    int unit;
    float bill;

    printf("Enter the number of Units: ");
    scanf("%d", &unit);

    bill = unit * 4;

    if (unit > 100 && unit <= 300)
    {
        bill = unit * 5.25;
        bill = bill + bill * 0.1;
    }
    else if (unit > 300)
    {
        bill = unit * 6.5;
        bill = bill + bill * 0.15;
    }

    printf("Your total bill is %f", bill);
    
    return 0;
}