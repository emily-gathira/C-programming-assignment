/*
Name: Gathira Emily WairiMU
RegNo: CT101/G/26497/25
Description: Hotel Chain Room occupancy 3D
*/

#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

int main(){
	int chain[3][5][10];
	int branch, floor, room;
	int occupied, vacant;
	
	srand(time(0));
	printf("Hotel chain room occupancy report\n");
	
	//assign random occupancy (1 = occupied, 0 = vacant)
	for (branch = 0; branch < 3; branch++){
		occupied = 0;
		vacant = 0;
		
		for (floor = 0; floor < 5; floor++){
			for (room = 0; room < 10; room++){
				chain[branch][floor][room] = rand() % 2;
				if (chain[branch][floor][room] == 1) occupied++;
				else vacant++;
				
			}
		}
	//Display results for this branch
	printf("\nBranch %d Summary:\n", branch + 1);
	printf("Total occupied rooms: %d\n", occupied);
	printf("Total vacant rooms: %d\n", vacant);
	}
	printf("End of report.\n");
	
	return 0;
}