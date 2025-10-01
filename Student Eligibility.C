/*
Name: Gathira Emily wairimu
Reg No: CT101/26497/25
Description: Student Eligibility
*/

#include<stdio.h>

int main(){
float attendance,average_marks;
printf("enter attendance percentange:");
scanf("%f", &attendance);

printf("enter average_marks:");
scanf("%f", &average_marks);

if (attendance>=75 && average_marks >=40) {
	printf("eligible for final exams \n");
} else {
	printf("not eligible \n");
}
return 0;
} 