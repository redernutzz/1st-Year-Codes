#include <stdio.h>
#include <stdlib.h>

int main() {
	int input[5], count;
	printf("Input the 5 numbers of the array:\n");
	for (count=0; count<5; count++)
	{
		scanf("%d", &input[count]);
		if (input[count]>0)
		{
			input[count]=input[count];
		}
		else 
		{
			input[count]=100;
		}
	}	
	printf("Array values are: \n");
	for (count=0; count<5; count++)
	{
		printf("n[%d]: %d\n", count, input[count]);
	}
	return 0;
}
