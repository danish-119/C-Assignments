#include <stdio.h>
#include <string.h>

int main()
{
    char string[100];

    printf("Enter a string: ");
    gets(string);

    int i;
    for (i = 0; string[i] != '\0'; i++)
    {
        string[i] = string[i] + 3;
    }
    string[i] = '\0';

    printf("\nString After Encryption: %s", string); //

    for (i = 0; string[i] != '\0'; i++)
    {
        string[i] = string[i] - 3;
    }
    string[i] = '\0';

    printf("\nString After Decryption: %s", string); //

    return 0;
}