#include <stdio.h>

//final variables declare
float final; 

//final print of all parts
void getDisplay(double total, double allowable, double expense){

    printf("Total expenses incurred: %d\n", &total);

    printf("Total allowable expenses: %d\n", &allowable);

    final = total - expense;

    if(final > allowable){
        printf("You owe: %d\n", &final);
    }else{
        printf("You saved: %d\n", &final);
    }
}