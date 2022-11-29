#include <stdio.h>
#include "header.h"

int main(){
    double total = 0;
    int days = 0;
    int departure = 0;
    int arrival = 0;
    double allowable = 0;
    double parking = 0;
    double food = 0;

    days = getDays();
    departure = getDeparture();
    arrival = getArrival();

    printf("%d %d", departure, arrival);

}