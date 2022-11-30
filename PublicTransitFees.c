#include <stdio.h>

double getPublic(int days){
  double totalExpense = 0;
  double input;
  
  for (int i = 0; i < days; i++){
    printf("Enter fee for day %d", (i + 1));

    scanf("%lf", &input);
  }

  return totalExpense;
}