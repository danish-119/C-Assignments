#include <stdio.h>

int main()
{
    int city_code, city_population, total_population = 0;
    float average_population, population_density, city_area, total_area = 0;
    int city_count = 0;

    // Collect information for 10 cities using a loop
    while (city_count < 10)
    {
        printf("\n*** City %d ***\n", city_count + 1);
        printf("City Code: ");
        scanf("%d", &city_code);
        printf("Population of City: ");
        scanf("%d", &city_population);
        printf("Area in Square-Kilometers: ");
        scanf("%f", &city_area);

        // Calculate the total population and total area
        total_population = total_population + city_population;
        total_area = total_area + city_area;
        printf("----------------------\n");
        city_count++;
    }

    // Calculate average population and population density
    average_population = total_population / 10.0;
    population_density = total_population / total_area;

    // Display total population, total area, and population density
    printf("Statistics:\n");
    printf("Total Population: %d\n", total_population);
    printf("Total Area: %.2f Sq.Km\n", total_area);
    printf("Population density: %.2f\n", population_density);

    // Check population density and provide a description
    if (population_density < 200.5)
    {
        printf("This is Under-Populated\n");
    }
    else if (population_density >= 200.6 && population_density < 523.22)
    {
        printf("This is Ideal Population\n");
    }
    else if (population_density >= 523.22)
    {
        printf("This is Over-Populated\n");
    }
    printf("-----End Programme-----");

    return 0;
}