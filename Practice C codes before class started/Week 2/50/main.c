#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int array[5], count;
	printf("Input the 5 numbers of the array: \n");
	for (count=0;count<5;count++)
	{
		scanf("%d\n", &array[count]);
		if(array[count]<5)
		{
			printf("A[%d] = %d", &count, &array[count]);
		}

	}
	return 0;
}
