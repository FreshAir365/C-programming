/*
=======================================================================================================
 Name        :Abdikarim Ibrahim
 Date		 : 07/17/18
 Description : this program is a solution to the program showed in mix_num_ch_input
				The problem was that the program prompts you a second set of data and quits b4
				you have a chance to respond! Why is that?
				It's the newline character again, this time the one immediately following the 3 on the first
				input line.
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

	while ((ch = getchar()) != '\n')
	{
		if (scanf("%i %i",&row, &col));
			break;
		display(ch, row, col);		// function call  
		while(getchar() != '\n')
			continue;
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


