// Exercise 4:
// This programme is prepared by Muhammad Danish on 02/10/2023.
// This is a programme which tell us about Discout according to age and status.
#include <stdio.h>
int main()
{
    int age;
    char status;
    
    printf("Are you a Student? y/n:");
    scanf("%c", &status);
    printf("Enter your age: ");
    scanf("%d", &age);

    if (status == 'y' && age > 18 && age < 24)
        printf("You get 20 percent Discount.");
    else if (status == 'n' && age > 65)
        printf("You get 15 percent Discount.");
    else if (status == 'n' && age > 25 && age < 65)
        printf("You get 10 percent Discount.");
    else
        printf("You are not eligble for any discount");

    return 0;
}