#include <stdio.h>
#include <stdlib.h>
int main() {
	int input, count;
	printf("Input an integer: ");
	scanf("%d", &input);
	if (input!=0)
	{
		printf("\nAll the divisor of %d are: \n", input);
		for (count=1; count<=(input)/(2); count++)
		{
			if (input%count==0)
			{
				printf("%d\n", count);	
			}	
		}
		printf("%d", (abs)(input));
	}
	else
		printf("\nThere are no divisors to 0.");
	return 0;
}
