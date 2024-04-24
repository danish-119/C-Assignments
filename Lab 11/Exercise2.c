#include <stdio.h>

typedef struct
{
    int hour;
    int minutes;
    int seconds;
} time;

// Function prototypes
void printTime(time t);
time AddTime(time t1, time t2);

int main()
{
    time t1, t2;

    // Input for time 1
    printf("Enter time 1 (hh:mm:ss): ");
    scanf("%d:%d:%d", &t1.hour, &t1.minutes, &t1.seconds);

    // Input for time 2
    printf("Enter time 2 (hh:mm:ss): ");
    scanf("%d:%d:%d", &t2.hour, &t2.minutes, &t2.seconds);

    printf("\nTime 1: ");
    printTime(t1);
    printf("Time 2: ");
    printTime(t2);

    time result = AddTime(t1, t2);

    printf("Resultant Time: ");
    printTime(result);

    return 0;
}

// Function to print time in the format hh:mm:ss
void printTime(time t)
{
    printf("%02d:%02d:%02d\n", t.hour, t.minutes, t.seconds);
}

// Function to add two times and return the resultant time
time AddTime(time t1, time t2)
{
    time result;

    // Add seconds and handle carry to minutes
    result.seconds = (t1.seconds + t2.seconds) % 60;
    int carry_to_minutes = (t1.seconds + t2.seconds) / 60;

    // Add minutes and handle carry to hours
    result.minutes = (t1.minutes + t2.minutes + carry_to_minutes) % 60;
    int carry_to_hours = (t1.minutes + t2.minutes + carry_to_minutes) / 60;

    // Add hours and handle rounding to 24 hours
    result.hour = (t1.hour + t2.hour + carry_to_hours) % 24;

    return result;
}
