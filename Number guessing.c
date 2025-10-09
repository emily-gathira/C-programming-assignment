/*
Name: Gathira Emily Wairimu
Reg No: CT101/G/26497/25
Description: Number Guessing Game
*/

#include<stdio.h>
#include <stdlib.h>
#include<time.h> 

int main() {
	int secretNumber, guess; //Initialize random generator for number srand(time(0));
	//Generate a random number between 1 and 20 (inclusive)
	int secret_Number = (rand() %20) + 1;
	printf("welcome to the number guessing game! \n");
	printf("i have selected a number between 1 and 20 \n");
	printf("Can you guess what it is? \n");
	// repeat until the user guesses the number correctly
	
	do {
		printf("Enter your guess:");
		scanf("%d", &guess);
		
		if(guess > secret_Number);
		{
			printf("Too high!\n");
	}  
	   if (guess < secret_Number)
	 {
		printf("Too low!\n");
	}else{
		printf("congratulations! You guessed the number! \n");
	}
	} while (guess != secret_Number);
	
	return 0;
	} 