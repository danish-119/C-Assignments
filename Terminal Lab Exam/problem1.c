// Included Libraries
#include <stdio.h>
#include <conio.h>

// Define Values
#define MAX 50
#define Max_Emp 100

// Define Typedef and Struct
typedef struct Employee
{
    int id;
    char name[MAX];
    float hours_worked;
    float hourly_rate;

} Employee;

// Function Prototypes
void addEmployee(Employee emp[], int count);
void displayAllEmployees(const Employee emp[], int count);
void searchEmployeeByID(const Employee emp[], int count, int id);
float calculateTotalPayroll(const Employee emp[], int count);
void saveToFile(const Employee emp[], int count, char filename[]);
void loadFromFile(struct Employee emp[], int count, char filename[]);

// Main Function..........
int main()
{
    char filename[MAX];
    int choice;
    int count = 0;
    int id;
    float TotalPay;
    Employee emp[Max_Emp];

    do
    {
        printf("\n\nMenu:\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Search Employee by ID\n");
        printf("4. Calculate Total Payroll\n");
        printf("5. Save to File\n");
        printf("6. Load from File\n");
        printf("7. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addEmployee(emp, count);
            count++;
            break;
        case 2:
            displayAllEmployees(emp, count);
            break;
        case 3:
            printf("\nEnter Id to search Employee:");
            scanf("%d", &id);
            searchEmployeeByID(emp, count, id);
            break;
        case 4:
            TotalPay = calculateTotalPayroll(emp, count);
            printf("Total Payroll for All Employees: $%.2f", TotalPay);
            _getch();
            fflush(stdin);
            break;
        case 5:
            fflush(stdin);
            printf("Enter File Name (Example.txt): ");
            gets(filename);
            saveToFile(emp, count, filename);
            break;
        case 6:
            fflush(stdin);
            printf("Enter File Name (Example.txt): ");
            gets(filename);
            loadFromFile(emp, count, filename);
            break;
        }

    } while (choice != 7);

    printf("Exiting the program. Goodbye!\n");

    return 0;
}

// Function to add employee
void addEmployee(Employee emp[], int count)
{

    printf("Enter Employee ID: ");
    scanf("%d", &emp[count].id);

    fflush(stdin);
    printf("Enter Employee Name:");
    gets(emp[count].name);

    printf("Enter Hours Worked:");
    scanf("%f", &emp[count].hours_worked);

    printf("Enter Hourly Rate:");
    scanf("%f", &emp[count].hourly_rate);

    printf("\nEmployee added successfully!\n");
    _getch();
    fflush(stdin);
}

// Function to display all employees
void displayAllEmployees(const Employee emp[], int count)
{
    printf("\n\nEmployee Details:\n");

    for (int i = 0; i < count; i++)
    {
        printf("ID: %-5d | Name: %-10s | Hours Worked: %-5.2f | Hourly Rate: %-5.2f\n", emp[i].id, emp[i].name, emp[i].hours_worked, emp[i].hourly_rate);
    }

    _getch();
    fflush(stdin);
}

// Function to search employee by id
void searchEmployeeByID(const Employee emp[], int count, int id)
{
    int found = 0;
    for (int i = 0; i < count; i++)
    {
        if (id == emp[i].id)
        {
            printf("Found:\n");
            printf("ID          : %d\n", emp[i].id);
            printf("Name        : %s\n", emp[i].name);
            printf("Hours Worked: %.2f\n", emp[i].hours_worked);
            printf("Hourly Rate : %.2f\n", emp[i].hourly_rate);

            found = 1;
        }
    }

    if (found == 0)
    {
        printf("\nEmployee not Found\n");
    }
    _getch();
}

// Function to calculate total payroll
float calculateTotalPayroll(const Employee emp[], int count)
{
    float TotalPay;
    for (int i = 0; i < count; i++)
    {
        TotalPay += emp[i].hourly_rate * emp[i].hours_worked;
    }

    return TotalPay;
}

// Function to store data in file
void saveToFile(const Employee emp[], int count, char filename[])
{
    FILE *file;
    file = fopen(filename, "a");

    for (int i = 0; i < count; i++)
    {
        fprintf(file, "%d %s %f %f\n", emp[i].id, emp[i].name, emp[i].hours_worked, emp[i].hourly_rate);
    }

    fclose(file);

    printf("Data Saved in file %s Successfully", filename);
    _getch();
    fflush(stdin);
}

// Function to load data from file
void loadFromFile(struct Employee emp[], int count, char filename[])
{
    FILE *file;
    file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("File does not exist...\n");
        _getch();
        fflush(stdin);
    }
    else
    {
        while (fscanf(file, "%d %[^ ] %f %f\n", &emp[count].id, emp[count].name, &emp[count].hours_worked, &emp[count].hourly_rate) == 4)
        {
            count++;
        }
        fclose(file);
        displayAllEmployees(emp, count);
    }
    _getch();
    fflush(stdin);
}