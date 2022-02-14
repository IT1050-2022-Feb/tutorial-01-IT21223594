/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

int minimum(int val_1, int val_2); //Function declaration
int maximum(int val_1, int val_2);
int multiply(int val_1, int val_2);

int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}

int minimum(int val_1, int val_2) //Function implement - minimum
{
  int min = 0;

  if(val_1 > val_2) 
  {
    min = val_2;
  }

  return min;
}

int maximum(int val_1, int val_2)  //Function implement -Maximum
{
  int max = 0;

  if(val_1 > val_2)
  {
    max = val_1;
  }

  return max;
}

int multiply(int val_1, int val_2) //Function implement - Multiply
{
  int result = 0;

  result = val_1 * val_2;

  return result;
}