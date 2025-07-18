#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<stdbool.h>
#define M 2
#define N 5
bool checkArrayEqual(int numArray[M] [N]);

int main ()
{
	int i, p;
	bool flag;
	int numArray [M][N];
	for (i = 0; i < 2; i++)
	{
		for (p = 0; p < 5; p++)
		{
			printf("Please input element [%d] in your array[%d]: ", p, i+1);
			scanf ("%d", &numArray[i][p]);
			printf("\n");
		}
	}

	flag = checkArrayEqual(numArray);
	if (flag)
	{
		
		printf("All elements in both arrays are equal");
	}
	else
	{
		
		printf("There is one or more elements in the array that are not equal");
	}
	return 0;
}
 
bool checkArrayEqual(int numArray[M] [N])
{
	int p, flag = 1;
	    for (p = 0; p < 5; p++)
	    {
	    	if(numArray [0][p] != numArray [1][p])
	        {
	            flag = 0;
	        }
	    }    
	return flag;
}
