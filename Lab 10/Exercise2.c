#include <stdio.h>

int stringlength(const char *s);
void stringcopy(char *s1, const char *s2);
void stringconcat(char *s1, const char *s2);

int main()
{
    char string1[20];
    char string2[20];

    printf("Enter 1st String: ");
    gets(string1);
    printf("Enter 2nd string: ");
    gets(string2);

    printf("\nLength of 1st string is %d\n", stringlength(string1));
    printf("Length of 2nd string is %d\n", stringlength(string2));

    stringconcat(string1, string2);
    printf("\nConcatenate:\nString 1: %s\t\tString 2: %s\n", string1, string2);

    stringcopy(string1, string2);
    printf("\nCopy:\nString 1: %s\t\tString 2: %s\n", string1, string2);

    return 0;
}

int stringlength(const char *s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }

    return i;
}

void stringcopy(char *s1, const char *s2)
{
    int i = 0;
    while (s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
}

void stringconcat(char *s1, const char *s2)
{
    int i = 0;
    int j = strlen(s1);

    while (s2[i] != '\0')
    {
        s1[j] = s2[i];
        j++;
        i++;
    }
    s1[j] = '\0';
}