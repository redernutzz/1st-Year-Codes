#include<stdio.h>
#include<stdlib.h>

struct Node{
	char name [50];
	struct Node *next;
	struct Node *prev;
};

powerRecursive(int num, int exp);

int main()
{
	int num, exp, result, i;
	printf("Enter a number: ");
	scanf("%d", &num);
	printf("Enter an exponent: ");
	scanf("%d", &exp);
	
	result = powerRecursive(num, exp);
	printf("Result: %d", result);
}



int powerRecursive(int num, int exp)
{
	
	if (exp == 0)
	{
		return 1;
	}
	
	if (exp == 1)//terminating condition
	{
		return num;// sa last part you don't call the recursive function itself anymore
	}
	
	//powerRecursive(num, exp-1);
				//return powerRecursive(num, 3) = 2
				//return powerRecursive(num, 2) = 4
				//return powerRecursive(num, 1) = 8
	return num * powerRecursive(num, exp-1);
	// when you call a recursive function give a different input like m-1 to make sure it would not loop infinitely
	
	//powerRecursive (2,1)
	//powerRecursive (2,2)
	//powerRecursive (2,3)
}

//function that computes the power of a number- NO RECURSION YET
//int power(int num, int exp)
//{
//	if (exp == 0)
//	{
//		return 1;
//	}
//	
//	int i, result = num;
//	
//	for (i = 1; i<exp; i++)
//	{
//		result = result *num;
//	}
//	
//	return result;
//}
