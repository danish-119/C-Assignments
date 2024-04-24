#include <stdio.h>
#include <ctype.h>

void countAndSort(char str[], int length);

int main() {
    char string[200];

    printf("Enter String: ");
    gets(string);

    countAndSort(string, 200);

    return 0;
}

void countAndSort(char str[], int length) {
    int vowels[5] = {0}; // Array to store count of each vowel (a, e, i, o, u)
    int consonants = 0, digits = 0, white_spaces = 0;

    for (int i = 0; i < length && str[i] != '\0'; i++) {
        char ch = str[i];

        if (isalpha(ch)) {

            switch (ch) {
                case 'A':
                case 'a':
                    vowels[0]++;
                    break;
                case 'E':
                case 'e':
                    vowels[1]++;
                    break;
                case 'I':
                case 'i':
                    vowels[2]++;
                    break;
                case 'O':
                case 'o':
                    vowels[3]++;
                    break;
                case 'U':
                case 'u':
                    vowels[4]++;
                    break;
                default:
                    consonants++;
                    break;
            }
        } else if (isdigit(ch)) {
            digits++;
        } else if (isspace(ch)) {
            white_spaces++;
        }
    }

    printf("\nTotal digits: %d\n", digits);
    printf("White spaces: %d\n", white_spaces);
    printf("Total Consonants: %d\n", consonants);
    printf("Total Vowels: %d\n", vowels[0] + vowels[1] + vowels[2] + vowels[3] + vowels[4]);

    printf("Total 'A': %d\n", vowels[0]);
    printf("Total 'E': %d\n", vowels[1]);
    printf("Total 'I': %d\n", vowels[2]);
    printf("Total 'O': %d\n", vowels[3]);
    printf("Total 'U': %d\n", vowels[4]);
}
