#include<stdlib.h>
#include<stdio.h>
#define LENGTH 10

void display (int randomArray[]);
void partition (int randomArray[]);
void swap (int randomArray[], int i, int j);

int main ()
{
	int i;
	int randomArray[LENGTH] = {8, 1, 4, 9, 6, 3, 5, 2, 7, 0};

//	int randomArray[LENGTH];
//	for (i = 0; i < LENGTH; i++)
//	{
//		randomArray[i] = rand() % 100;
//	}
	
	printf("\n\nOriginal List: ");
	display(randomArray);

	partition(randomArray);
}

void display(int randomArray[])
{
	int i;
	for (i = 0; i < LENGTH; i++)
	{
		printf("%d ", randomArray[i]);
	}
}

void swap(int randomArray[], int i, int j)
{
	int temp = randomArray[i];
	randomArray [i] = randomArray [j];
	randomArray [j] = temp;
}

void partition(int randomArray[])
{
	
	int pivotIndex = LENGTH - 1;
	int	pivot = pivotIndex/2;
	
	//Isolate Pivot
	swap(randomArray, pivot, pivotIndex);

	int i = 0, j = pivotIndex - 1;
	while (i <= j)
	{
		
		if (randomArray[i] <= randomArray [pivotIndex])
		{
			i++;
		}
		
 		else if (randomArray[j] >= randomArray [pivotIndex])
 		{
 			j--;
		}
		if (j < i)
		{	
			break;
		}
		//After finding an i and j, swap them
		swap (randomArray, i, j);
	}
	//i and j already crossed so place back the pivot at where i is
	swap (randomArray, i, pivotIndex);
		printf(" \n");
			display(randomArray);	

}
