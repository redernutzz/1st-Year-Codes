#include <stdio.h>
#include <stdlib.h>


int main() {
	int userInput[5], count, positiveCount=0, total=0;
	float average;
	for (count=1; count<=5; count++){
		printf("%d.) Input number ", count);
		scanf("%d", &userInput[count]);
		if (userInput[count]>0){
			positiveCount=positiveCount+1;
			total+= userInput[count];
		}
	}
	
	average=(float)total/positiveCount;
	printf("The number of positive numbers is/are: %d", positiveCount);
	printf("\nThe average of the positive numbers is: %.3f", average);
	return 0;
}
