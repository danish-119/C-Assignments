#include <stdio.h>
#include <conio.h>

int main()
{
    FILE *fptr1, *fptr2;
    char ch;

    fptr1 = fopen("File1.txt", "r");
    if (fptr1 == NULL)
    {
        printf("Cannot open File\n");
        _getch();
        return 0;
    }
    fptr2 = fopen("File2.txt", "w");

    ch = fgetc(fptr1);
    while (!feof(fptr1))
    {
        fputc(ch, fptr2);
        ch = fgetc(fptr1);
    }

    fclose(fptr1);
    fclose(fptr2);

    printf("The data has been transferred from File1.txt to File2.txt.\n");

    return 0;
}