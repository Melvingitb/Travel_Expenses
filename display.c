#include <stdio.h>

//final variables declare 
double owed = 0;
//final print of all parts
void getDisplay(double total, double allowable, double expense){

    printf("Total expenses incurred: %.2lf\n", total);

    printf("Total allowable expenses: %.2lf\n", allowable);

    if(expense > allowable){
        owed = expense - allowable;
        printf("You owe: %.2lf\n", owed);
    }else{
        printf("You saved: %.2lf\n", expense);
    }
}