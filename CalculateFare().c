/*
Name: Gathira Emily Wairimu
RegNo: CT101/G/26497/25
Description:Calculate Fare()
*/

 #include<stdio.h> 
int main() {
	//function to calculate fare
	float calculateFare(float distance){
		float fareRate = 50.0;
		float totalFare = distance * fareRate;
		return totalFare;
	}
	void main(){
		float distanceTravelled;
		float totalFare;
		
		//prompt user to enter distance
		printf("Enter distance travelled in kilometres:");
		scanf("%f", &distanceTravelled);
		
		//call the function to calculate fare
		totalFare = calculateFare(distanceTravelled);
		
		//display the result
		printf("The total fare for a distance of %.2f km is Ksh. %.2f\n", distanceTravelled, totalFare);
		
	}
		return 0;
}