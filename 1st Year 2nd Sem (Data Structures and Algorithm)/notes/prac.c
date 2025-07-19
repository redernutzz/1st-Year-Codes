#include<stdlib.h>
#include<stdio.h>
//#include<string.h>

typedef struct {
	char name[50];
	char program[50];
	int roomNumber;
	int floorLevel;
	char gender;
} Dormer;

Dormer registerDormer(Dormer *d);
void displayDormer(Dormer *d, int i);

int main()
{
	int i,numStudents;

	printf("Hello and welcome to USC Dormitory!\n");
	printf("How many students would you like to register in our dorm?");
	scanf("%d",&numStudents);

	Dormer *d = (Dormer *)malloc(numStudents*sizeof(Dormer));

	for(i=0; i < numStudents; i++)
	{
		populate(d+i);
	}
	
	system ("cls");
	
	for(i=0; i < numStudents; i++)
	{
		display(d+i, i);
	}

}

Dormer registerDormer(Dormer *d)
{
	printf("\nPlease enter the name of the student:");
	gets(d->name);
	
	printf("\nPlease enter what program the student is taking int he University (Ex. BS CE):");
	gets(d->program);
	
	printf("\nPlease enter the gender of the student(M or F): ");
	getche(d->gender);
	
	printf("\nPlease indicate the floor leveland room number you have chosen:");
	scanf("%d %d", d->floorLevel, d->roomNumber);
}

void displayDormer(Dormer *d, int i)
{
	printf("\nStudent Number: %d", i+1);
	
	printf("\nStudent Name: %s", d->name);

	printf("\nStudent Program: %s", d->program);

	printf("\nStudent Gender: %c", d->gender);
	
	printf("\nDormer is assigned to Floor: %d Room:%d", d->floorLevel, d->roomNumber);
	
}
