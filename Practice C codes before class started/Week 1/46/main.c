#include <stdio.h>
#include <stdlib.h>

int main() {
	int counter;
	float denominator=1, numerator=1, answer;
	for(counter=1;counter<5;counter++){
		answer+=(float)(numerator)/(float)(denominator);
		numerator=numerator+2;
		denominator=denominator*2;
	}
	printf("Value of series: %.3f", answer);
	return 0;
}
