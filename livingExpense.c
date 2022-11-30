#include <stdio.h>

double getLiving()
{
    double hotel;
    double meals;
    double total;

    printf("Enter the total expense(s) spent on hotels: ");
    scanf("%lf", &hotel);

    printf("Enter the total expense(s) spent on meals: ");
    scanf("%lf", &meals);

    total = hotel + meals;

    return total;
}