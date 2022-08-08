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

  float travelled_distance;
  float extra_distance;
  float charges_1st_30,charges_extra_distance,total;

  printf("Enter the distance :");
  scanf("%f",&travelled_distance);

  if(travelled_distance<=30){
    extra_distance=0;
    charges_1st_30=travelled_distance*50;
    total=charges_1st_30;
  }else{
    extra_distance=travelled_distance-30;
    charges_extra_distance=extra_distance*40;
    total=charges_extra_distance+1500;
  }

  printf("Total amount :%f",total);
  
  return 0;
}
