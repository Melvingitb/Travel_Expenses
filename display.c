#include <stdio.h>

//final variables declare 
double owed = 0;
//final print of all parts
void getDisplay(double total, double allowable, double expense){

    printf("Total expenses incurred: %d\n", total);

    printf("Total allowable expenses: %d\n", allowable);

    if(expense > allowable){
        owed = expense - allowable;
        printf("You owe: %d\n", owed);
    }else{
        printf("You saved: %d\n", expense);
    }
}