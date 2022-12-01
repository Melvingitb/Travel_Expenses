#include <stdio.h>
#include <assert.h>

void Get_Public_Returns_12();
void Get_Public_Returns_18();
void Get_Living_Returns_6();
void Get_Living_Returns_15();
void Get_Allowable_Returns_81();
void Get_Allowable_Returns_265();
double getPublic(int days);
double getLiving();
double getAllowable(int days, int departure, int arrival);

int main(){
  Get_Public_Returns_12();
  Get_Public_Returns_18();
  Get_Living_Returns_6();
  Get_Living_Returns_15();
  Get_Allowable_Returns_81();
  Get_Allowable_Returns_265();
}

void Get_Public_Returns_12(){
  //Enter 6 and 6 or any positive numbers that add to 12
  double value = getPublic(1);

  assert(value == 12);
}

void Get_Public_Returns_18(){
  //Enter 10 and 8 or any positive numbers that add to 12
  double value = getPublic(2);

  assert(value == 18);
}

void Get_Living_Returns_6(){
  //Enter 3 and 3 or any positive numbers that add to 12
  double value = getLiving(0);

  assert(value == 6);
}

void Get_Living_Returns_15(){
  //Enter 7 and 8 or any positive numbers that add to 12
  double value = getLiving(0);

  assert(value == 15);
}

void Get_Allowable_Returns_81(){
  //For one day, at a departure time at 1000 and an arrival time at 2300, allowable is 81
  double value = getAllowable(1, 1000, 2300);

  assert(value == 81);
}

void Get_Allowable_Returns_265(){
  //For three days, at a departure time at 900 and an arrival time at 1100, allowable is 265
  double value = getAllowable(3, 900, 1100);

  assert(value == 265);
}