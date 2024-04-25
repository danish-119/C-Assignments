#include <stdio.h>

int main()
{
    FILE *fptr;
    char string[50];

    printf("Enter string: ");
    gets(string);

    fptr= fopen("File1.txt", "w");
    fprintf(fptr, string);
    fclose(fptr);

    printf("The data has been written to file.\n");

    return 0;
}