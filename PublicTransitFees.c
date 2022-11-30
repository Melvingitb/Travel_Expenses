#include <stdio.h>

double getPublic(int days){
  double totalExpense = 0;
  double input = -1;
  //double feeAccumulator = 0;
  
  printf("Enter the total taxi fee:\n";

  // Validates taxi fee >= 0
  while (input < 0){
    scanf("%lf", &input);
  }

  totalExpense += input;

  input = -1;

  // Removed functionality for expenditure compensation. Calculated elsewhere.
  /*if (input > (10 * days)){
    totalExpense += (input - (10 * days));
  }*/

  printf("Enter the total parking fee:\n";

  // Validates parking fee >= 0
  while (input < 0){
    scanf("%lf", &input);
  }

  totalExpense += input;

  // Removed functionality for expenditure compensation. Calculated elsewhere.
  /*if (input > (6 * days)){
    totalExpense += (input - (6 * days));
  }*/

  return totalExpense;
}