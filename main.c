#include <stdio.h>
#include "header.h"

int main(){
    double total = 0;
    int days = 0;
    int departure = 0;
    int arrival = 0;
    double allowable = 0;
    double publicexpense = 0;
    double livingexpense = 0;
    double expense;
    //double parking = 0;
    //double food = 0;

    //get time info
    days = getDays();
    departure = getDeparture();
    arrival = getArrival();

    //printf("%d %d", departure, arrival);

    allowable = getAllowable(days, departure, arrival);
    printf("%lf", allowable);
    //getDisplay(total, allowable, expense);

    //get round-trip airfare, car rentals, miles driven, and conference and seminar registration fees; add it to total expenses
    total += getTransport();

    //get parking fees and taxi fees; add it to public expenses and total. expenses is used to calculate how much must be reimbursed
    publicexpense += getPublic();
    total += publicexpense;

    //get hotel expenses and food costs; add it to loving expenses and total. expenses is used to calculate how much must be reimbursed
    livingexpense += getLiving();
    total += livingexpense;

    expense = publicexpense + livingexpense;

    //get the total amount of allowable expenses from the company
    //allowable = getAllowable(days, departure, arrival);

    //display final results
    getDisplay(total, allowable, expense);

}