// Exercise 1:
#include <stdio.h>
int main()
{
    float temperature, T_temperature=0.0, average_temperature;
    float day_count = 0;
    printf("Enter temperatures of days:\n");
    printf("Enter -1 to get average temperature\n");
    // Continue looping until -1 is entered
    while (temperature != -1)
    {
        printf("Day %d: ", (int)day_count + 1);
        scanf("%f", &temperature);
        // Add the entered temperature to the total temperature
        T_temperature = T_temperature + temperature;
        day_count++;
    }
    // Calculate the average temperature
    average_temperature = T_temperature / day_count;
    // Display the calculated average temperature
    printf("The average temperature of given days is: %.2f°C", average_temperature);
    return 0;
}