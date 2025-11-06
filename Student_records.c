/*
Name: Gathira Emliy Wairimu
RegNo: CT101/G/26497/25
Description: Reading student records
*/

#include<stdio.h> 
#include<stdlib.h> 

int main(){
	FILE *fe;
	char name[80][40];
	int reg_no[80];
	float marks[100];
	int i = 0;
	
	fe = fopen("results.dat", "rb");
	if (fe == NULL){
		printf("Error occured in the opening of the file!\n");
		exit(1);
	}
	while(fread(name, sizeof(name), 1, fe)
	 == 1 && fread (&reg_no, sizeof(int), 1, fe)
     == 1 && fread(&marks, sizeof(float), 1, fe)== 1) {
		 printf("Name: %s\nReg No: %d\nMarks: %.2f\n\n", name, reg_no, marks);
	 }
	 fclose(fe);
	
	return 0;
}