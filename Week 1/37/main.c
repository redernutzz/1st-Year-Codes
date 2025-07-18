#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int coordinateX, coordinateY;
	printf("Input the coordinate (x, y): ");
	scanf("%d %d:", &coordinateX, &coordinateY);
	printf("x: %d", coordinateX);
	printf("\ny: %d", coordinateY);
	
	if ((0<coordinateX)&&(0<coordinateY)){
		printf("\nQuadrant 1: (+,+)");
	}
	else if ((0>coordinateX)&&(0<coordinateY)){
		printf("\nQuadrant 2: (-,+)");
	}
	else if ((0>coordinateX)&&(0>coordinateY)){
		printf("\nQuadrant 3: (-,-)");
	}
	else if ((0<coordinateX)&&(0>coordinateY)){
		printf("\nQuadrant 4: (+,-)");
	}
	return 0;
}
