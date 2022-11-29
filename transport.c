#include <stdio.h>

double getTransport(int days) {
    
    double total = 0.0;
    double temp = 0.0;

    
    //get the round-trip airfare add to total and covered
    printf("How much was the total round-trip airfare?\n");

    scanf("%d", &temp);
    total += temp;
    
    
    //get the total spend on car rental and add it to total and covered
    printf("How much was was spent on car rentals for the trip?\n");

    scanf("%d", &temp);
    total += temp;


    //if no private vehicle -> return
    //if yes private vehicle -> 0.27c per mile driven 
    printf("Was a private vehicle used? (0 for no, 1 for yes)\n");

    scanf("%d", &temp);
    if(temp == 0.0){
        return total;
    }

    printf("How many miles were driven in the private vehicle?\n");

    scanf("%d", &temp);
    total += (temp * 0.27);
    
    return total;

};