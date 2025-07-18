#include <stdio.h>
#include <stdlib.h>

int main() {
	int firstNum, secondNum;
	printf("Input first number of the pair: ");
	scanf("%d", &firstNum);
	printf("Input second number of the pair: ");
	scanf("%d", &secondNum);
	if (firstNum>secondNum ){
		printf("\n--------------------------------\n");
		printf("The pair is descending");
	}
	else if (firstNum<secondNum){
		printf("\n--------------------------------\n");
		printf("The pair is ascending");
	}
	else {
		printf("\n--------------------------------\n");
		printf("The two numbers you inputted are equal");
	}
	return 0;
}
