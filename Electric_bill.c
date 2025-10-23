/*
Name: Gathira Emily Wairimu
RegNo: CT101/G/26497/25
Description: Calculating Electric Bill
*/

#include<stdio.h> 
 int main() { 
    int units;
    float total_bill= 0.0;
    
    printf("enter Electric_Units_Used:");
    scanf("%d", &units);
    
	if (units <= 100){
    total_bill = units * 10.0;
	} else if (units <= 200){
		total_bill = (100 * 10.0) + ((units - 200) * 20.0);
	}else{
		total_bill =(100 * 10.0) + (100 * 15.0);
	}
	
    printf("Total bill: %.2f kes \n", total_bill);

return 0;
}