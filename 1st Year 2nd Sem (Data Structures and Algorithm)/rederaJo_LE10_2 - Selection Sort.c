#include<stdlib.h>
#include<stdio.h>

void populateArr(int unsortedArr[]);
void displayArr(int unsortedArr[]);
void selectionSort(int unsortedArr[]);
void findNum(int unsortedArr[], int userInp);

int main()
{
	int unsortedArr[10];
	int userInp; 
	
	printf("Please input 10 numbers below:\n");
	populateArr(unsortedArr);
	
	printf("This is currently your unsorted list: ");
	displayArr(unsortedArr);
	
	selectionSort(unsortedArr);
	
	printf("\nThis is now your sorted list: ");
	displayArr(unsortedArr);
	
	do
	{
		printf("\nPlease enter the value you want to find (Input -999 to quit): ");
		scanf("%d", &userInp);
		
		findNum(unsortedArr, userInp);
	} while(userInp != -999);
	
}

void populateArr(int unsortedArr[])
{
	int i;
	
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &unsortedArr[i]);
	}
}

void displayArr(int unsortedArr[])
{
	int i;
	
	for (i = 0; i < 10; i++)
	{
		printf("%d ", unsortedArr[i]);
	}
	printf("\n");
}

void selectionSort(int unsortedArr[])
{
	int i, j;
	
	for (i = 0; i < 10; i++)
	{
		int smallest = i;
		for (j = i + 1; j < 10; j++)
		{
			if (unsortedArr[j] < unsortedArr[smallest] )
			{
				smallest = j;
			}
		}
		if (smallest != i)
		{
			int temp = unsortedArr[i];
			unsortedArr[i] = unsortedArr[smallest];
			unsortedArr[smallest] = temp;
		}
		printf("\n");
		displayArr(unsortedArr);
	}
}

void findNum(int unsortedArr[], int userInp)
{
	int leftmost = 0, rightmost = 9;
	int mid = (leftmost + rightmost) / 2;
	
	while (leftmost <= rightmost )
	{
		if (unsortedArr[mid] == userInp)
		{
			printf("\nThe number %d, was found at index %d\n", unsortedArr[mid], mid);
			return;
		}
		else if (unsortedArr[mid] > userInp)
		{
			rightmost = mid - 1;
		}
		else
		{		
			leftmost = mid + 1;	
		}
		
		mid = (leftmost + rightmost) / 2;
	}
	
	if (leftmost > rightmost )
	{
		printf("\nWe could not found the number %d you are looking for. Please try again.\n", userInp);
	}
}
