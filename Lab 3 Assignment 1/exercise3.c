// Exercise 3:
// This programme is prepared by Muhammad Danish on 02/10/2023.
// This is a programme which tell us about discout in shipping cost.
#include <stdio.h>
int main()
{
    int number_of_items, price_of_item, shipping_cost = 200;
    float T_shipping_cost, T_cost;

    printf("Enter the number of Items you Buy:");
    scanf("%d", &number_of_items);
    printf("Enter the price of 1 item: ");
    scanf("%d", &price_of_item);

    T_shipping_cost = number_of_items * shipping_cost;

    if (number_of_items > 100)
        T_shipping_cost = T_shipping_cost * 0.85;
    else if (number_of_items > 50 && number_of_items <= 100)
        T_shipping_cost = T_shipping_cost * 0.9;
    else if (number_of_items > 0 && number_of_items <= 50)
        T_shipping_cost = T_shipping_cost;

    T_cost = T_shipping_cost + number_of_items * price_of_item;
    printf("You have to pay: Rs%f", T_cost);
    
    return 0;
}