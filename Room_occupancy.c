/*
Name: Gathira Emily Wairimu 
RegNo: CT101/G/26497/25
Description: Room Occupancy
*/

#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

int main(){
	int occupancy[5][10];
	int floors = 5;
	int roomPerFloor = 10;
	int i,j;
	int totalOccupiedRooms = 0;
	int vacantRooms = 0;
	
	//use current time to seed the random number generator
	srand(time(0));
	
	//Input random occupancy data(1-occupied, 0-vacant)
	printf("Simulating room occupancy for one branch...\n");
	for (i=0; i< floors; i++) {
		for (j=0; j< roomPerFloor; j++) {
			occupancy[i][j] = rand() % 2;
			if (occupancy[i][j] ==1) {
				totalOccupiedRooms ++;
			} else{
				vacantRooms++;
			}
		}
	}

//Display the number of occupied and vacant rooms
 printf("Total occupied rooms: %d\n", totalOccupiedRooms);
printf("Total vacant rooms: %d\n", vacantRooms);

return 0;
}