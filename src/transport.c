#include <stdio.h>

double getTransport() {
    
    double total = 0.0;
    double temp = 0.0;
    int check = 0;


    //get the round-trip airfare add to total
    while(check == 0){
        printf("How much was the total round-trip airfare?\n");

        scanf("%lf", &temp);
        if (temp >= 0.0){
            total += temp;
            check = 1;
        } else {
            printf("Please enter a postive value.");
        }
    }
    

    //reset check 
    check = 0;
    //get the total spent on car rental and add it to total
    while(check == 0){
        printf("How much was was spent on car rentals for the trip?\n");

        scanf("%lf", &temp);

        if (temp >= 0.0){
            total += temp;
            check = 1;
        } else {
            printf("Please enter a postive value.");
        }
    }


    //reset check 
    check = 0;
    //get the total spent on conference or seminars
    while(check == 0){
        printf("How much was was spent conference or seminars?\n");

        scanf("%lf", &temp);

        if (temp >= 0.0){
            total += temp;
            check = 1;
        } else {
            printf("Please enter a postive value.");
        }
    }


    //reset check
    check = 0;
    //if no private vehicle -> return
    //if yes private vehicle -> 0.27c per mile driven 
    while(check == 0){
        printf("Was a private vehicle used? (0 for no, 1 for yes)\n");

        scanf("%lf", &temp);
        if (temp == 0 || temp == 1){
            check = 1;
        } else {
            printf("Please enter [0 for no] or [1 for yes].");
        }
    }
    if(temp == 0){
        return total;
    }


    //reset check
    check = 0;
    //get the total number of miles driven * 0.27 and add to total
    while(check == 0){
        printf("How many miles were driven in the private vehicle?\n");

        scanf("%lf", &temp);
        if(temp >= 0.0){
            total += (temp * 0.27);
            check = 1;
        } else {
            printf("Please enter a postive value.");
        }
    }
    

    //return 
    return total;

};