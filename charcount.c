/*
============================================================================
 Name        :Abdikarim Ibrahim
 Date		 : 06/13/18
 Description : counts how many times the characters other than single or double quotes
				appear in an imput sentence.
 ============================================================================
 */
#include <stdio.h>
#define PERIOD '.'
int main (void)
{
	char ch;
	int charcount = 0;
	while (ch = getchar() != PERIOD)
	{
		if (ch != '"' && ch != '\'')
		charcount++;

    }
	printf("There are %d non-quote character. \n",charcount);
	return 0;
}

