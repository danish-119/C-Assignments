#include <stdio.h>
#define MAX_LENGTH 50
// Define a struct named as Student
typedef struct Student
{
    char name[MAX_LENGTH];
    int id;
    float gpa;

} Student;

// Global variable
int i = 1;

// Function prototype
void inputStudent(Student *student_info);
void displayStudent(Student *student_info);

// Main Function.....
int main()
{
    Student student_info[3];

    for (int j = 0; j < 3; j++)
    {
        inputStudent(&student_info[j]);
    }

    printf("\n");
    for (int j = 0; j < 3; j++)
    {
        displayStudent(&student_info[j]);
    }

    return 0;
}

// Function: takes input of student information
void inputStudent(Student *student_info)
{
    fflush(stdin);
    printf("Enter information for student %d:\n", i);
    printf("Name: ");
    gets(student_info->name);

    do
    {
        printf("ID: ");
        scanf("%d", &student_info->id);

    } while (student_info->id < 0 || student_info->id > 999);

    do
    {
        printf("GPA: ");
        scanf("%f", &student_info->gpa);

    } while (student_info->gpa < 0.0 || student_info->gpa > 4.0);

    printf("---------------------------------\n");
    i++;
}

// Function: displays information of student
void displayStudent(Student *student_info)
{
    printf("Displaying Student Information:\n");
    printf("Name: %s\n", student_info->name);
    printf("%s's ID: %d\n", student_info->name, student_info->id);
    printf("GPA: %.2f\n", student_info->gpa);
    printf("---------------------------------\n");
}