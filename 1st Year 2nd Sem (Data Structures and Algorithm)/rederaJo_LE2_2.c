#include<stdlib.h>
#include<stdio.h>

void addTwo (int *x, int *y);
void subTwo (int *x, int *y);
void multTwo (int *x, int *y);
void divTwo (int *x, int *y);

int main ()
{
	int operation, firstNum, secondNum;
	int *p1, *p2;
	p1 = &firstNum;
	p2 = &secondNum;

	printf("Please input two numbers: \n");
	scanf("%d %d", p1, p2);

	addTwo (&firstNum, &secondNum);
	subTwo (&firstNum, &secondNum);
	multTwo (&firstNum, &secondNum);
	divTwo (&firstNum, &secondNum);

}

void addTwo (int *x, int *y)
{
	int z = *x + *y;
	printf("\nSUM: %d\n", z);
}

void subTwo (int *x, int *y)
{
	int z = *x - *y;
	printf("DIFFERENCE: %d\n", z);
}

void multTwo (int *x, int *y)
{
	int z = *x * *y;
	printf("PRODUCT: %d\n", z);
}

void divTwo (int *x, int *y)
{
	float z = (float)*x / (float)*y;
	printf("QUOTIENT: %.2f \n", z);
}
