#include<stdlib.h>
#include<stdio.h>

void printPass(int unsortedArr[]);
void printArr(int unsortedArr[]);
void bubbleSort(int unsortedArr[]);

int main ()
{
	int i, unsortedArr [10];
	
	for (i = 0; i <= 9; i++)
	{
		printf("Please input a number: ");
		scanf("%d", &unsortedArr[i]);
	}
	
	printf("\nThis is your current unsorted array:");
	for (i = 0; i <= 9; i++)
	{
		printf(" %d ", unsortedArr[i]);
	}
	printf("\n");
	
	bubbleSort(unsortedArr);
	return 0;
}

void bubbleSort(int unsortedArr[])
{
	int i, j;
	
	for(i = 0; i < 10; i++ )
	{
		for (j = 0; j < 10-1; j++)
		{
			if (unsortedArr[j+1] < unsortedArr[j])
			{
				int temp = unsortedArr[j];
				unsortedArr[j] = unsortedArr[j+1];
				unsortedArr[j+1] = temp;
			}
		}
		printPass(unsortedArr);
	}
	printArr(unsortedArr);
}

void printPass(int unsortedArr[])
{
	int i;
	printf("\nThis is your current array: ");
	for (i = 0; i < 10; i++)
	{
		printf(" %d ", unsortedArr [i]);
	}
}

void printArr(int unsortedArr[])
{
	int i;
	printf("\n\nThis is now your sorted array: ");
	for (i = 0; i < 10; i++)
	{
		printf(" %d ", unsortedArr [i]);
	}
}
