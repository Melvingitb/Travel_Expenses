#include <stdio.h>

double getLiving(int days, int departure, int arrival)
{
}

double getHotelCost(int days)
{
    double raw;
    double cost;
    double allowable = 0;
    allowable = 90 * (days - 1);

    printf("Enter the total expenses spent on hotels.");
    scanf("%d", &raw);

    cost = raw - allowable;

    return cost;
}