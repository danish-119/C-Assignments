// Exercise 2:
// This programme is prepared by Muhammad Danish on 02/10/2023.
// This is a programme which tell us about our grade and Credit Points.
#include <stdio.h>
int main()
{
    int marks1, marks2, marks3, marks4, marks5, total_marks;
    float percentage_marks;

    printf("Enter the marks of English:");
    scanf("%d", &marks1);
    printf("Enter the marks of Urdu:");
    scanf("%d", &marks2);
    printf("Enter the marks of Math:");
    scanf("%d", &marks3);
    printf("Enter the marks of Pak Study:");
    scanf("%d", &marks4);
    printf("Enter the marks of Science:");
    scanf("%d", &marks5);

    total_marks = marks1 + marks2 + marks3 + marks4 + marks5;
    percentage_marks = total_marks * 0.2;

    if (percentage_marks >= 90 && percentage_marks <= 100)
        printf("Grade: A\n Credit Points: 4.0");
    else if (percentage_marks >= 85)
        printf("Grade=A-\n Credit Points: 3.7");
    else if (percentage_marks >= 80)
        printf("Grade=B+\n Credit Points: 3.3");
    else if (percentage_marks >= 75)
        printf("Grade=B\n Credit Points: 3.0");
    else if (percentage_marks >= 70)
        printf("Grade=B-\n Credit Points: 2.7");
    else if (percentage_marks >= 65)
        printf("Grade=C+\n Credit Points: 2.3");
    else if (percentage_marks >= 60)
        printf("Grade=C\n Credit Points: 2.0");
    else if (percentage_marks >= 55)
        printf("Grade=C-\n Credit Points: 1.7");
    else if (percentage_marks >= 50)
        printf("Grade=D\n Credit Points: 1.3");
    else if (percentage_marks < 50)
        printf("Grade=F\n Credit Points: 0.0");
    else
        printf("YOU Entered Wrong Values.");
        
    return 0;
}