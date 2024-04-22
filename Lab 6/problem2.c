#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Function definition
int Random(int min, int max);
// Main function
int main() {

    int num1 = Random(1, 2);           // Random number between 1 and 2 (inclusive)
    int num2 = Random(1, 100);         // Random number between 1 and 100 (inclusive)
    int num3 = Random(0, 9);           // Random number between 0 and 9
    int num4 = Random(1000, 1112);     // Random number between 1000 and 1112 (inclusive)
    int num5 = Random(-1, 1);          // Random number between -1 and 1
    int num6 = Random(-3, 11);         // Random number between -3 and 11

    printf("num1: %d\n", num1);
    printf("num2: %d\n", num2);
    printf("num3: %d\n", num3);
    printf("num4: %d\n", num4);
    printf("num5: %d\n", num5);
    printf("num6: %d\n", num6);

    return 0;
}

// definition of function for random value
int Random(int min, int max) {
    return (rand() % (max - min + 1)) + min;
}