#include <stdio.h>
#include <stdlib.h>
int userInput;
int main() {
	
	printf("Input a number between 1 to 12 to get the month name: ");
	scanf("%d", &userInput);
	if (userInput==1){
		printf("Month Name: January");
		}
		else if (userInput==2){
			printf("Month Name: February");
		}
		else if (userInput==3){
			printf("Month Name: March");
		}
		else if (userInput==4){
			printf("Month Name: April");
		}
		else if (userInput==5){
			printf("Month Name: May");
		}
		else if (userInput==6){
			printf("Month Name: June");
		}
		else if (userInput==7){
			printf("Month Name: July");
		}
		else if (userInput==8){
			printf("Month Name: August");
		}
		else if (userInput==9){
			printf("Month Name: September");
		}
		else if (userInput==10){
			printf("Month Name: October");
		}
		else if (userInput==11){
			printf("Month Name: November");
		}
		else if (userInput==12){
			printf("Month Name: December");
		}
													
	else {
		printf("The value chosen is not part of the choices");
	}
	
	
	return 0;
}
