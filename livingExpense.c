#include <stdio.h>

double getLiving(int days, int departure, int arrival)
{
    double hotel = getHotelCost(days);
    double meals = getMealCost(departure, arrival);

    return (hotel + meals);
}

double getHotelCost(int days)
{
    double raw = 0;
    double total = 0;
    double allowable = 0;
    allowable = 90 * (days - 1);

    printf("Enter the total expense(s) spent on hotels.");
    scanf("%f", &raw);

    total = raw - allowable;

    return cost;
}

double getMealCost(int departure, int arrival)
{
    double firstBreakfastRaw = 0;
    double firstLunchRaw = 0;
    double firstDinnerRaw = 0;
    double firstBreakfastFinal, firstLunchFinal, firstDinnerFinal;
    double total = 0;
    printf("Enter the total expense(s) of breakfast, lunch, and dinner, on the first day of your trip, seperately\n");
    printf("Cost of your breakfast on the first day: \n");
    printf("Enter zero if you did not have breakfast on the first day\n");
    scanf("%f", &firstBreakfastRaw);
    printf("Cost of your lunch on the first day: \n");
    printf("Enter zero if you did not have lunch on the first day\n");
    scanf("%f", &firstLunchRaw);
    printf("Cost of your dinner on the first day: \n");
    printf("Enter zero if you did not have dinner on the first day\n");
    scanf("%f", &firstDinnerRaw);
    switch (departure)
    {
        case departure < 700:
            firsBreakfastFinal = firstBreakfastRaw - 9;

        case departure < 1200;
            firstLunchFinal = firstLunchRaw - 12;

        case departure < 1800;
            firstDinnerFinal = firstDinnerRaw - 16;

        default:
            break;

    }

    double lastBreakfastRaw = 0;
    double lastLunchRaw = 0;
    double lastDinnerRaw = 0;
    double lastBreakfastFinal, lastLunchFinal, lastDinnerFinal;
    printf("Enter the total expense(s) of breakfast, lunch, and dinner, on the last day of your trip, seperately\n");
    printf("Cost of your breakfast on the last day: \n");
    printf("Enter zero if you did not have breakfast on the last day\n");
    scanf("%f", &lastBreakfastRaw);
    printf("Cost of your lunch on the last day: \n");
    printf("Enter zero if you did not have lunch on the last day\n");
    scanf("%f", &lastLunchRaw);
    printf("Cost of your dinner on the last day: \n");
    printf("Enter zero if you did not have dinner on the last day\n");
    scanf("%f", &lastDinnerinnerRaw);
    switch (arrival)
    {
        case arrival > 800:
            lastBreakfastFinal = lastBreakfastRaw - 9;

        case arrival > 1300;
            lastLunchFinal = lastLunchRaw - 12;

        case arrival > 1900;
            lastDinnerFinal = lastDinnerRaw - 16;

        default:
            break;

    }

    total = firstBreakfastFinal + firstLunchFinal + firstDinnerFinal + lastBreakfastFinal + lastLunchFinal + lastDinnerFinal;

    if (total < 0)
    {
        total = 0;
    }

    return total;
}