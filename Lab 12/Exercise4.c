#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 100

typedef struct {
    char fname[MAX_LINE_LENGTH];
    char lname[MAX_LINE_LENGTH];
    float score;
} Athlete;

void bubbleSort(Athlete arr[], int n);
void swap(Athlete *xp, Athlete *yp);
int main() {
    FILE *file = fopen("athlete.txt", "r");
    if (file == NULL) {
        printf("Could not open the file.\n");
        return 1;
    }

    int count = 0;
    char line[MAX_LINE_LENGTH];
    while (fgets(line, sizeof(line), file)) {
        count++;
    }

    rewind(file);

    Athlete athletes[count];
    for (int i = 0; i < count; i++) {
        fscanf(file, "%s %s %f", athletes[i].fname, athletes[i].lname, &athletes[i].score);
    }

    fclose(file);

    int n = sizeof(athletes) / sizeof(athletes[0]);
    bubbleSort(athletes, n);

    file = fopen("output.txt", "w");
    if (file == NULL) {
        printf("Could not open the file.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        fprintf(file, "%s \t %s \t%.2f\n", athletes[i].fname, athletes[i].lname, athletes[i].score);
    }

    fclose(file);
    printf("Data has been sorted successfully\n");	
    return 0;
}
void swap(Athlete *xp, Athlete *yp) {
    Athlete temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(Athlete arr[], int n) {
   int i, j;
   for (i = 0; i < n-1; i++) {
       for (j = 0; j < n-i-1; j++) {
           if (arr[j].score > arr[j+1].score) {
              swap(&arr[j], &arr[j+1]);
           }
       }
   }
}