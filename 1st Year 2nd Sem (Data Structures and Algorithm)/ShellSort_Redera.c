#include<stdlib.h>
#include<stdio.h>
#define LENGTH 10

void display(int randomArray[]);
void shellSort (int randomArray[]);

int main ()
{
	int i, randomArray[LENGTH];
	
	for (i = 0; i < LENGTH; i++)
	{
		randomArray[i] = rand() % 100;
	}
	
	printf("\n\nOriginal List: ");
	display(randomArray);

	shellSort(randomArray);
}

void display(int randomArray[])
{
	int i;
	for (i = 0; i < LENGTH; i++)
	{
		printf("%d ", randomArray[i]);
	}
}

void shellSort (int randomArray[])
{
	int i, j, gap = LENGTH/2;
	
	while(gap >= 1)
	{
		for (j = gap; j< LENGTH; j++)
		{
			for(i = j-gap; i>=0; i = i-gap)
			{
				if (randomArray[i+gap] <= randomArray[i])
				{
					int temp = randomArray[i];
					randomArray[i] = randomArray[i+gap];
					randomArray[i+gap] = temp;
				}	
				else
				{
					break;
				}
			}
		}
		printf("\n Gap [%d]:  ", gap);
		display(randomArray);
		gap = gap/2;
	}
}
