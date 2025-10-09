/*
Name: Gathira Emily wairimu
Reg No: CT101/G/26497/25
Description: Password system
*/

#include<stdio.h> 
#include<string.h> 

int main() {
	char password[100];
	const char correct_password[]="1234";
	
	do {
		printf("Enter password: ");
		scanf("%s", password);
	} while (strcmp(password, correct_password) !=0);
	printf("Access granted \n");
	return 0;
}