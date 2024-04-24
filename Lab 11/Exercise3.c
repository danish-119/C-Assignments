#include <stdio.h>

// Define structures
typedef struct
{
    int day, month, year;
} DateType;

typedef struct
{
    int hour, minute, second;
} TimeType;

typedef struct
{
    int venue;
    DateType date;
    TimeType time;
} EventType;

// Function prototypes
void InputDate(DateType *date);
void InputTime(TimeType *time);
void InputEvent(EventType *event);
int EarlierEvent(EventType e1, EventType e2);

int main()
{
    EventType events[10];

    // Input for 10 events
    for (int i = 0; i < 10; i++)
    {
        printf("Enter details for Event %d:\n", i + 1);
        InputEvent(&events[i]);
    }

    // Sorting events based on the EarlierEvent function
    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (EarlierEvent(events[j], events[i]))
            {
                // Swap events[i] and events[j]
                EventType temp = events[i];
                events[i] = events[j];
                events[j] = temp;
            }
        }
    }

    // Display sorted events
    printf("\n\nEvents after sorting:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Event %d: Venue %d, Date %d-%d-%d, Time %d:%d:%d\n", i + 1, events[i].venue,
               events[i].date.day, events[i].date.month, events[i].date.year,
               events[i].time.hour, events[i].time.minute, events[i].time.second);
    }

    return 0;
}

// Function to input date
void InputDate(DateType *date)
{
    printf("Enter day, month, and year (separated by spaces): ");
    scanf("%d %d %d", &date->day, &date->month, &date->year);
}

// Function to input time
void InputTime(TimeType *time)
{
    printf("Enter hour, minute, and second (separated by spaces): ");
    scanf("%d %d %d", &time->hour, &time->minute, &time->second);
}

// Function to input event
void InputEvent(EventType *event)
{
    printf("Enter venue: ");
    scanf("%d", &event->venue);
    InputDate(&event->date);
    InputTime(&event->time);
}

// Function to determine which event occurred earlier
int EarlierEvent(EventType e1, EventType e2)
{
    if (e1.date.year < e2.date.year ||
        (e1.date.year == e2.date.year && e1.date.month < e2.date.month) ||
        (e1.date.year == e2.date.year && e1.date.month == e2.date.month && e1.date.day < e2.date.day) ||
        (e1.date.year == e2.date.year && e1.date.month == e2.date.month && e1.date.day == e2.date.day &&
         e1.time.hour < e2.time.hour) ||
        (e1.date.year == e2.date.year && e1.date.month == e2.date.month && e1.date.day == e2.date.day &&
         e1.time.hour == e2.time.hour && e1.time.minute < e2.time.minute) ||
        (e1.date.year == e2.date.year && e1.date.month == e2.date.month && e1.date.day == e2.date.day &&
         e1.time.hour == e2.time.hour && e1.time.minute == e2.time.minute && e1.time.second < e2.time.second))
    {
        return 1; // e1 occurs earlier
    }
    else
    {
        return 0; // e2 occurs earlier or at the same time
    }
}
