/*
 ============================================================================
 FILE        : fileHandling.c
 AUTHOR      : Elline L. Fabian
 DESCRIPTION : Program that demonstrates basic of file handling function with
 			   DBMS operations.
 COPYRIGHT   : 07 September 2006
 REVISION HISTORY
 Date: 			By: 		Description:
 9/27/16		ELF			added file and fuction details, remove text 
 							functions, modify function prototypes
 ============================================================================
 */
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include<errno.h>
#include<conio.h>
#include<windows.h>

//Global variables
COORD coord ={0,0}; //sets coordinates to 0,0

struct info{
	char id[6];
	char name[31];
};
typedef struct info INFO;

//Function Prototypes
void mainMenu(void);
void appendData(INFO data);
void browseData(INFO data);
bool searchData(INFO *data, char *idnum);
void gotoxy (int x, int y);

/*
============================================================================
 FUNCTION    : main
 DESCRIPTION : Execute the main module
 ARGUMENTS   : int argc - number of arguments
 			   char *argv[] - verctor of arguments
 RETURNS     : int - returns exit code
 ============================================================================
 */
int main(int argc, char *argv[]) 
{
	INFO person;
	char ch, idnum[6], name[20];
	bool f;
	
	for(;;)
	{
		do
		{
			system("cls");
			mainMenu();
			ch=getch();
			ch=tolower(ch);
		}while(ch!='a' && ch!='b' && ch!='s' && ch!='q');

		if(ch=='a')
		{
			system("cls");
			gotoxy(10,6);printf("ID# : ");
			gets(person.id);
			gotoxy(10,8);printf("NAME: ");
			gets(person.name);
			appendData(person);
		}
		else if(ch=='b')
		{
			browseData(person);
		}
		else if(ch=='s')
		{
			system("cls");
			gotoxy(3,3);printf("ID Number: ");
			gets(idnum);
			f = searchData(&person, idnum);
			if(f==1)
			{
				gotoxy(3,4); puts(person.name);
				gotoxy(34,13);printf("SEARCH DONE!");
			}
			else
			{
				gotoxy(29,13);printf("ID NUMBER does not exist!");
			}
			getch();
		}
		else
		{
			gotoxy(37,12);printf("GOODBYE!\n\n");
			return 0;
		}
	}
	
}

/*
============================================================================
 FUNCTION    : mainMenu
 DESCRIPTION : Display main menu options
 ARGUMENTS   : void
 RETURNS     : void
 ============================================================================
*/
void mainMenu(void)
{
	gotoxy(1,1); printf("--------------------");
	gotoxy(1,2); printf("| [a] APPEND       |");
	gotoxy(1,3); printf("| [b] BROWSE       |");
	gotoxy(1,4); printf("| [s] SEARCH       |");
	gotoxy(1,5); printf("| [q] QUIT         |");
	gotoxy(1,6); printf("--------------------");
}

/*
============================================================================
 FUNCTION    : appendData
 DESCRIPTION : Append data to the file
 ARGUMENTS   : INFO data - structure variable to the region in memory to 
 			   be written to the file
 RETURNS     : void
 ============================================================================
*/
void appendData(INFO data)
{
	FILE *fp;
	
	fp=fopen("student.txt","a+");

	fwrite(&data,sizeof(data),1,fp);
	fclose(fp);
}

/*
============================================================================
 FUNCTION    : browseData
 DESCRIPTION : Display all entries in a tabular form
 ARGUMENTS   : INFO data - structure variable to the region in memory that 
 			   receives the data read from a file
 RETURNS     : void
 ============================================================================
*/
void browseData(INFO data)
{
	FILE *fp;
	int y=3;
	
	system("cls");
	fp=fopen("student.txt","rb");
	if(fopen("student.txt","rb")==NULL)
	{
		gotoxy(32,24);
		printf("Cannot Open File");
		getch();
		return;
	}
	
	fseek(fp,0,SEEK_SET);
	fread(&data,sizeof(data),1,fp);
	
	gotoxy(5,1);printf("ID#");
	gotoxy(25,1);printf("NAME");
	gotoxy(50,1);printf("AGE");
	while(!feof(fp))
	{
		gotoxy(5,y);puts(data.id);
		gotoxy(25,y);puts(data.name);
		gotoxy(50,y);puts(data.name);
		fread(&data,sizeof(data),1,fp);
		y++;
	 }
	 fclose(fp);
	 getch();
	 return;
}

/*
============================================================================
 FUNCTION    : searchData
 DESCRIPTION : Display main menu options
 ARGUMENTS   : INFO data - structure pointer to the region in memory that 
 			   receives the data read from a file
 			   char *idnum - ID number to search
 RETURNS     : bool - 0 if not found, 1 if found
 ============================================================================
*/
bool searchData(INFO *data, char *idnum)
{
	FILE *fp;
	
	bool find=0;
	
	fp=fopen("student.txt","rb");
		
	fseek(fp,0,SEEK_SET);
	while(!feof(fp) && !find)
	{
		fread((INFO*)data,sizeof(INFO),1,fp);
		if(!strcmp(idnum,data->id))
		{
			find=1;
		}
	}
	fclose(fp);
	return find;
}

/*
============================================================================
 FUNCTION    : gotoxy
 DESCRIPTION : Position the cursor at indicated x and y coordinates
 ARGUMENTS   : int x - x-axis location of the cursor (column)
 			   int y - y-axis location of the cursor (row)
 RETURNS     : void
 ============================================================================
*/
void gotoxy (int x, int y)
{
	coord.X = x; coord.Y = y; //X and Y coordinates
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

