/*
=======================================================================================================
 Name        :Abdikarim Ibrahim
 Date		 : 07/17/18
 Description : Suppose your program requires both ch input using getch() and
				numeric input using scanf(). Each functions does its job well,, but both don't 
				mix together well. That's bcz getchar()  reads every character, including spaces, tabs, 
				and newlines whereas scanf() when reading numbers, skips over spaces, tabs, and newlines
 ========================================================================================================
 */
#include <stdio.h>

void display(char cr, int lines, int width);    // prototype of a function

int main (void)
{
	int ch;			// characters to be printed
	int row, col;	// number of rows and columns
	
	printf("Enter a character and two integers:\n");
	printf("Or new line to quit\n");

	while ((ch = getchar())!= '\n')
	{
		scanf("%d %d",&row, &col);
		display(ch, row, col);		// function call
		printf("Enter another character and two integers:\n");
		printf("Or new line to quit\n");
	}

	printf("Bye.\n");
	
	return 0;
}

void display(char cr, int lines, int width)
{
	int row, col;
	for (row = 1; row <= lines; row++)
	{
		for (col = 1; col <= width; col++)
			putchar(cr);
			
		putchar('\n');    // end line and start new one.

	}

}


