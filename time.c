#include <stdio.h>

int getDays(){
    int days = 0;
    int check = 0;

    while (check == 0){
        printf("How many days total were spent on the trip?\n");

        scanf("%d", &days);

        if (days > 0){
            check = 1;
        }
        else{
            printf("Please enter a valid amount of days.\n");
        }
    }

    return days;
}

int getDeparture(){
    int departure = 0;
    int check = 0;
    while (check == 0){
        printf("Please enter the time of departure in 24 hour-format, military time. (ie for 1 PM enter 1300, for 5:35 PM enter 1735, for 12 PM enter 1200, etc.)\n");

        scanf("%d", &departure);

        if (departure < 0 || departure % 100 > 60 || departure > 2359){
            printf("Please enter a valid departure time.");
        }
        else{
            check = 1;
        }
    }

    return departure;
}

int getArrival(){
    int arrival = 0;
    int check = 0;
    while (check == 0){
        printf("Please enter the time of arrival in 24 hour-format, military time. (ie for 1 PM enter 1300, for 5:35 PM enter 1735, for 12 PM enter 1200, etc.)\n");

        scanf("%d", &arrival);

        if (arrival < 0 || arrival % 100 > 60 || arrival > 2359){
            printf("Please enter a valid arrival time.");
        }
        else{
            check = 1;
        }
    }

    return arrival;
}