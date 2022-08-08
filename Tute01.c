/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float subject1,subject2;
  printf("Enter Subject 01 marks :");
  scanf("%f",&subject1);
  printf("Enter Subject 02 marks :");
  scanf("%f",&subject2);

  float avg;

  avg=(subject1+subject2)/2.0;

  printf("Avg marks :%f",avg);
  return 0;
}

