/*
Name: Gathira Emily Wairimu
Reg No: CT101/G/26497/25
Description: A bank ATM withdrawal
*/

#include <stdio.h>

int main(){
	int amount;
	int balance = 1000; //start
	
	while(balance>0) //stop
	{
		printf("Enter the amount to withdraw \n");
		scanf("%d", &amount);	
		balance -= amount; //step, balance = balance - amount
		
    }
    printf(" Insufficient balance");
    
    return 0;
}