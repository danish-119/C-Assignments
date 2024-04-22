#include <stdio.h>
// Function prototype
float calculate_charges(int hours);
// Main Function
int main()
{
    int h1, h2, h3; // Hours parked by three customers
    float total_charge;

    // Input hours parked for each customer
    printf("Customer 1: ");
    scanf("%d", &h1);
    printf("Customer 2: ");
    scanf("%d", &h2);
    printf("Customer 3: ");
    scanf("%d", &h3);

    // Calculate charges and print the table
    printf("Car\tHours\tCharge\n");
    printf("1\t%d\t£%.2f\n", h1, calculate_charges(h1));
    printf("2\t%d\t£%.2f\n", h2, calculate_charges(h2));
    printf("3\t%d\t£%.2f\n", h3, calculate_charges(h3));
    total_charge = calculate_charges(h1) + calculate_charges(h2) + calculate_charges(h3);
    printf("Total\t%d\t£%.2f\n", h1 + h2 + h3, total_charge);

    return 0;
}

// Function to calculate the parking charges for a customer
float calculate_charges(int hours)
{
    float total_charge = 2.00; // Minimum fee for up to 3 hours

    if (hours > 3)
    {
        total_charge += 0.50 * (hours - 3); // Additional charge for hours beyond 3
    }
    // Maximum charge is £10.00
    if (total_charge > 10.00)
    {
        total_charge = 10.00;
    }

    return total_charge;
}
