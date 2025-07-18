#include <stdio.h>

int main(){
	FILE *fp;
	char text[60];
 	int i, c;

 	//This file creates new text file if non-existent then open
 	//otherwise if it exits, it just opens the file
        //fp = fopen("C:\\Users\\APMondigo\\Desktop\\abc.txt", "w");
 	fp = fopen("abc.txt", "w");


 	printf("\nENTER TEXT BELOW\n");

 	//reads the input from the command terminal
        //scanf("%s", &text);
        //fscanf(stdin, "%s", &text);
    gets(text);

 	//displays the contents of variable "text" per character
 	for(c = 1; c <= 10; c++) { //Display the content 10 times
  		for(i = 0; text[i]; i++)
  			putc(text[i], fp);
  		putc('\n', fp);
 	}
 	printf("\nThe text is copied to the file\n");

 	//closes the file
 	fclose(fp);

    return 0;

}
