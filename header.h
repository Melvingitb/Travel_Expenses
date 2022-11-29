double getAllowable(int days, int arrival, int departure);
double getTransport(int days);  //round-trip airfare, car rentals, miles driven if private vehicle was used($0.27 per mile)
double getPublic(int days); //parking fees ($6 per day allowed), taxi fees ($10 per day allowed), conference or seminar registration fees
double getLiving(int days, int arrival, int departure); //hotel expenses ($90 per day allowed), amount of each meal eaten

//in time.c
int getDays();
int getDeparture();
int getArrival();