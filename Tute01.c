/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  
  int mark1, mark2, sum = 0; // variables
  float avg = 0;

  printf("Enter mark1 : "); //prompt
  scanf("%d", &mark1);

  printf("Enter mark2 : ");
  scanf("%d", &mark2);

  sum = mark1 + mark2; //Calculation - sum of the marks
  avg = (float)sum / 2; // Calculation - average of the marks

  printf("\nAverage mark : %.2f", avg); // Display average
  return 0;
}

