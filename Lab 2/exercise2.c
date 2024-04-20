// Exercise 2:
#include <stdio.h>
int main()
{
    int cost_price, sell_price;
    printf("Enter the cost price:");
    scanf("%d", &cost_price);
    printf("Enter the sell price:");
    scanf("%d", &sell_price);
    int profit = sell_price - cost_price;
    int loss = cost_price - sell_price;
    if (cost_price < sell_price)
        printf("You have profit of: Rs %d", profit);
    else if (sell_price < cost_price)
        printf("You are in loss of: Rs %d", loss);
    else
        printf("No profit, No Loss");
    return 0;
}