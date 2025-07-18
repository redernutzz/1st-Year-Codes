#include <stdio.h>
#include <stdlib.h>

int main() {
	int denominator;
	float answer;
	for (denominator=1; denominator<51; denominator++){
		answer+=((float)(1))/(denominator);
	}
	printf("Value of S: %.2f", answer);
	return 0;
}
