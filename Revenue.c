/*
Name: Gathira Emily Wairimu
RegNo: CT101/G/26494/97
Description: ID array
*/

#include <stdio.h> 

int main(){
	//declare and initialize 1D array
	int i;
	float revenue[7];
	float totalRevenue = 0;
	float averageRevenue;
	
	//input revenue of each day
printf("Enter the revenue for each day of the week:\n");
for (i = 0; i < 7; i++) {
	printf("Day %d:", i + 1);
	scanf("%f", &revenue[i]);
	totalRevenue += revenue[i];
}
	
	//calculate the average daily revenue
	averageRevenue = totalRevenue /7;
	
	//Display the results
	printf("\n --- Weekly revenue summary ---\n");
	printf("Total weekly revenue: %.2f\n", totalRevenue);
	printf("Average daily revenue: %.2f\n", averageRevenue);
	
	return 0;
}
		