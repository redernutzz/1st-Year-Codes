#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float h;
float array[6];
float yInitial;
float product;
float zInitial, yXH, zXH;
int main()
{
    h = 0.001;
    yInitial = 1;
    zInitial = 0;
    float h2 = 0.001;
    yXH = 0;
    zXH = 0;
    int i;
    float actual;
    for(i=1; i< 6; i++){
    	yXH = yInitial + h*zInitial;
    	zXH = zInitial + (h*((-3*zInitial)+ (-2*yInitial)));
    	actual = (-1*exp(-1*2*h2) ) + (2*exp(-1*h2));
    	printf("%f    %f    %f", zXH, yXH, actual);
		printf("\n");
		h2 = h2 + 0.001;
    	yInitial = yXH;
    	zInitial = zXH;
	}
    
    
    return 0;
}

