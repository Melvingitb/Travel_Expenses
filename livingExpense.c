#include <stdio.h>

double getLiving()
{
    double hotel;
    double meals;
    double total;

    printf("Enter the total expense(s) spent on hotels: ");
    scanf("%f\n", &hotel);

    printf("Enter the total expense(s) spent on meals: ");
    scanf("%f\n", &meals);

    total = hotel + meals;

    return total;
}