
	#include<stdio.h>
	int userInput, Sec, Hours, Mins;
int main(){
	printf("Input seconds to convert: ");
	scanf("%d", &userInput);
	Hours= userInput/3600;
	Mins= (userInput-(Hours*3600))/60;
	Sec= (userInput-(Hours*3600)-(Mins*60))/1;
	printf("There are:\n");
	printf("H:M:S - %d:%d:%d", Hours, Mins, Sec);
	return 0;
}
