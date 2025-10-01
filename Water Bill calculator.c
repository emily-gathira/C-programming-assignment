/*
Name: Gathira Emily Wairimu
Reg No: CT101/26497/25
Description: Water Bill Calculator
*/

#include<stdio.h>
int main() {
	int water_units_consumed;
	float total_bill=0.0;
	
	printf("enter water_units_consumed:");
		scanf("%d", &water_units_consumed);
	
	if (water_units_consumed<=30){
		total_bill=water_units_consumed * 20;
	} else if(water_units_consumed<=60) {
		total_bill= (30*20) + ((water_units_consumed-30)*25);
	} else {
		total_bill=(30*20)+(30*25) + (( -60)*30);
	}
	printf("total_water_bill: %.2f kes \n", total_bill);
	
	return 0;
}