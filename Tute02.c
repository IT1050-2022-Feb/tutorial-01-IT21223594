/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {
  int distance, amount = 0; //Variables

  printf("Enter the distance van has travelled : "); //prompt
  scanf("%d", &distance);

//Selection - nested if-else
  if(distance > 0 && distance <= 30)
  {
    amount = distance * 50; //Calculation
  }
  else if(distance > 30)
  {
    amount = 30 * 50 +(distance - 30) * 40;
  }
  else
  {
    printf("Invalid distance");//error prompt
    return -1;
  }

  printf("Amount to be paid :  %d", amount); // Final result display

  return 0;
}
