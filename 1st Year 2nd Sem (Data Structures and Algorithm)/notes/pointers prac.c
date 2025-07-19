#include<stdlib.h>
#include<stdio.h>

void addTwoNumbers(int *x, int *y, int *z);

int main ()
{
	int *p, *q, *r, a ,b, c,**p;
	a=2;
	b=4;
	c =0;
	p = &a;
	q = &b;
	r =&q;
	
	printf("The address of a : %d", p);
	printf("\nThe address of b : %d", q);
	
	printf("\nThe value of a : %d", *p);
	printf("\nThe value of b : %d", *q);
	
	addTwoNumbers (&a, &b, &c); //pwede pud addTwoNumbers (&a, &b, &c)
	printf("\nThe value of c : %d", *r);
}

void addTwoNumbers(int *x, int *y, int *z)
{
	*z = *x + *y;
	
}
