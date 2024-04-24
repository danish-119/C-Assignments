#include <stdio.h>
#include <ctype.h>

void remove_Non_Alpha(char *string);

int main()
{
    char string[20];

    printf("Enter a string: ");
    gets(string);

    remove_Non_Alpha(string);

    printf("\nString after removing non-alphabetic characters:\n%s\n", string);

    return 0;
}

void remove_Non_Alpha(char *string)
{
    int i, j = 0;
    for (i = 0; string[i] != '\0'; i++)
    {
        if (isalpha(string[i]))
        {
            string[j++] = string[i];
        }
    }
    string[j] = '\0';
}
