/*
============================================================================
 Name        :Abdikarim Ibrahim
 Date		 : 06/13/18
 Description : A computer OS need some way to tell where each file begins and ends.
				One method to detect the end of a file is to place as pecial character
				in the file to mark the end. Another one is to keep track of the file size.
				C handles this variety of methods by having the getchar() func return a specail value
				when the end of a file is reached, regardless of how the OS actually detects EOF.
 ============================================================================
 */


#include <stdio.h>

int main (void)
{
	char ch; // you can similarly use int ch
	
	while ((ch = getchar()) != EOF)
		putchar(ch);
	return 0;
}

