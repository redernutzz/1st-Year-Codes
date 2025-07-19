#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>

struct Dormer {
	char name[50];
	char program[50];
	int roomNumber;
	int floorLevel;
	char gender;
};

struct Dormer registerDormer(struct Dormer d);
void displayDormer(struct Dormer d, int i);

int main()
{
	int i,numStudents;
	struct Dormer dormers[20];
	printf("\t\t\t\tHello and welcome to USC Dormitory!\n\n");
	printf("How many students would you like to register in our dorm? ");
	scanf("%d",&numStudents);

//	Dormer *d = (Dormer *)malloc(numStudents*sizeof(Dormer));

	for(i=0; i < numStudents; i++)
	{
		dormers [i]= registerDormer(dormers[i]);
	}
	
	system ("cls");
	
	for(i=0; i < numStudents; i++)
	{
		displayDormer(dormers[i],i);
	}
	return 0;
}

struct Dormer registerDormer(struct Dormer d)
{
	fflush(stdin);
	printf("\nPlease enter the name of the student:");
	gets(d.name);
	
	fflush(stdin);
	printf("\nPlease enter what program the student is taking int he University (Ex. BS CE):");
	gets(d.program);
	
	fflush(stdin);
	printf("\nPlease enter the gender of the student(M or F): ");
	d.gender= getchar();
	
	printf("\nPlease indicate the floor leveland room number you have chosen:");
	scanf("%d %d", &d.floorLevel, &d.roomNumber);
	
	return d;
}

void displayDormer(struct Dormer d, int i)
{
	printf("\nStudent Number: %d", i+1);
	
	printf("\nStudent Name: %s", d.name);

	printf("\nStudent Program: %s", d.program);

	printf("\nStudent Gender: %c", d.gender);
	
	printf("\nDormer is assigned to Floor: %d Room:%d", d.floorLevel, d.roomNumber);
	
}
