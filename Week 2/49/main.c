#include <stdio.h>
#include <stdlib.h>



int main() 
{
	int input[5], count, output;
	printf("Input the first number of the array: ");
	scanf("%d", &output);
	for(count=0; count<=4; count++)
	{
		input[count]=output;
		output=3*output;	
	}
	for (count=0; count<=4; count++)
	{
		printf("n[%d] = %d\n", count, input[count]);
	}
	return 0;
}
