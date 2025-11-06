/*
Name: Gathira Emily Wairimu
RegNo: CT101/G/26497/25
Description: Calculating total sales
*/

#include<stdio.h> 
#include<stdlib.h> 

int main(){
	FILE *fe;
	float amount, total = 0.0;
	
	fe = fopen("sales.text", "r"); //open reading file
	if (fe == NULL){
	printf("Error occured in opening of the file!\n");
	return (1);	
	}
	
	while (fscanf(fe, "%f", &amount) == 1) {
		total += amount;
	}
	fclose(fe);
	
	printf("Total sales of the day: %.2f\n", total);
		
	return 0;
}