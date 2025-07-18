#include <stdio.h>
#include <stdlib.h>

int main() {
	int userInput[5];
	int negativeCOunt=0, positiveCount=0, numberInputted;
	for (numberInputted=0;numberInputted<5;numberInputted++){
		printf("Input number ", numberInputted+1);
		scanf("%d", &userInput[numberInputted]);
		if (userInput[numberInputted]>0){
			positiveCount++;
		}
		else if (userInput[numberInputted]<0){
			negativeCOunt++;
		}
	
		else{
			printf("error you entered zero");
		}
	}
	printf("Number of positive numbers: %d\n", positiveCount);
	printf("Number of negative numbers: %d", negativeCOunt);
	return 0;
}
