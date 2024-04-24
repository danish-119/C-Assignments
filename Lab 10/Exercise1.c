#include <stdio.h>
#include <string.h>

void Abbreviation(char name[]);

int main()
{
    char name[30];

    printf("Enter the organization name: ");
    gets(name);

    printf("\nOrganization Name is %s and its abbreviation is ", name);
    Abbreviation(name);

    return 0;
}

void Abbreviation(char name[])
{
    char *token = strtok(name, " ");

    while (token != NULL)
    {
        printf("%c", token[0]);
        token = strtok(NULL, " ");
    }

    printf("\n");
}
