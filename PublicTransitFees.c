#include <stdio.h>

double getPublic(int days){
  double totalExpense = 0;
  double input;
  //double feeAccumulator = 0;
  
  for (int i = 0; i < days; i++){
    printf("Enter the taxi fee for day %d", (i + 1));

    scanf("%lf", &input);

    if (input > 10){
      totalExpense += (input - 10);
    }
  }

  for (int i = 0; i < days; i++){
    printf("Enter the parking fee for day %d", (i + 1));

    scanf("%lf", &input);

    if (input > 6){
      totalExpense += (input - 6);
    }
  }

  return totalExpense;
}