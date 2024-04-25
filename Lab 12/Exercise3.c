#include <stdio.h>
#include <string.h>

int FileName(char name[], char word[]);

int main()
{
    char name[30];
    char word[10];

    printf("Enter the file name: ");
    gets(name);
    printf("Enter the keyword to find: ");
    scanf("%s", word);
    strlwr(word);

    int count = FileName(name, word);
    printf("Word found %d times in file", count);

    return 0;
}

int FileName(char name[], char word[])
{
    FILE *fptr;
    char f_word[10];
    int count = 0;

    fptr = fopen(name, "r");
    if (fptr == NULL)
    {
        printf("Cannot open File\n");
        return 0;
    }

    while (fscanf(fptr, "%s", f_word) != EOF)
    {
        strlwr(f_word);
        if (strcmp(f_word, word) == 0)
        {
            count++;
        }
    }

    return count;
}