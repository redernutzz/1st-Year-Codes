#include<stdio.h>
#include<stdlib.h>

int main ()
{
	int userInp;
	int largest = 0;
	int smallest = largest;
	do
	{
		printf("Enter an integer (Enter -99 to end program):");
		scanf("%d", &userInp);
		if (userInp > largest)
		{
			largest = userInp;
		}
		
		if (userInp < smallest)
		{
			smallest = userInp;
		}	
	}while (userInp != -99);
	
	printf("\nThe largest number from all the numbers you entered is: %d\n", largest);
	printf("The smallest number from all the numbers you entered is: %d", smallest);
	return 0;
}
