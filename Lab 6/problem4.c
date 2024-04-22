#include <stdio.h>
// Function Prototype
float celsius(float fahrenheit);
float fahrenheit(float celsius);
// Main Function
int main() {
    printf("Celsius to Fahrenheit Conversion Table\n");
    printf("Celsius\tFahrenheit\n");
    for (int celsius_temp = 0; celsius_temp <= 100; celsius_temp += 10) {
        float fahrenheit_temp = fahrenheit(celsius_temp);
        printf("%d\t%.2f\n", celsius_temp, fahrenheit_temp);
    }

    printf("\nFahrenheit to Celsius Conversion Table\n");
    printf("Fahrenheit\tCelsius\n");
    for (int fahrenheit_temp = 32; fahrenheit_temp <= 212; fahrenheit_temp += 10) {
        float celsius_temp = celsius(fahrenheit_temp);
        printf("%d\t%.2f\n", fahrenheit_temp, celsius_temp);
    }

    return 0;
}

// Function to convert Fahrenheit to Celsius
float celsius(float fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

// Function to convert Celsius to Fahrenheit
float fahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

