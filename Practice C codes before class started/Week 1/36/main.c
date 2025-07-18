#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char password[50], correctPass[10]= "helloWorld";
int main() {
	while (1){
	
	printf("Input password: ");
	gets(password);
	
	if (!strcmp(password, correctPass)){
		printf("Password is correct!\n");
		break;
	}
	else{
		printf("Password is incorrect!\n");
	}
}
	return 0;
}
