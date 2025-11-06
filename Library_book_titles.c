/*
Name: Gathira Emily Wairimu
RegNo: CT101/G/26497/25
Description: Library book titles
*/

#include<stdio.h> 
#include<stdlib.h> 

int main(){
	FILE *fe;
	char title[100];
	
	fe = fopen("Borrowed_books.txt", "a"); //append
	if (fe == NULL) {
		printf("Error in opening of the file!\n");
		exit(1);
	}
	
	printf("Enter the title of the book borrowed:");
	fgets(title, sizeof(title), stdin);//read with spaces
	
	fprintf(fe, "%s", title);//write to the file
	fclose(fe);
	
	printf("The title of the book has been successfully stored in Borrowed_books.txt\n");
		
			
	return 0;
}