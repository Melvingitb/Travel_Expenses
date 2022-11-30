#ifndef HEADER_H
#define HEADER_H

void getDisplay(int total, int allowable, int expense);

double getAllowable(int days, int departure, int arrival);

double getTransport();  //round-trip airfare, car rentals, miles driven if private vehicle was used($0.27 per mile), conference or seminar fees

double getPublic(int days); //parking fees ($6 per day allowed), taxi fees ($10 per day allowed)
double getLiving(int days, int departure, int arrival); //hotel expenses ($90 per day allowed), amount of each meal eaten

//in time.c
int getDays();
int getDeparture();
int getArrival();

#endif