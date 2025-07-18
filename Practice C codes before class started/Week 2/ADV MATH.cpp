#include <stdio.h>
#include <stdlib.h>


float h;
float array[6];
float yInitial;
float product;

int main()
{
    h = 0.1;
    yInitial = 1;
    product = 0;
    int i;
    for(i = 1; i < 6; i++){
    	array[i] = yInitial + h*yInitial;
    	yInitial = array[i];
	}
	for(i = 1; i < 6; i++){
	printf("%f", array[i]);
	printf("\n");
	}
    return 0;
}

