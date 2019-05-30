/*
============================================================================
 Name        :Abdikarim Ibrahim
 Date		 : 08/11/18
 Description : arrays are often used to store data needed for a program.
				In this a 12-element array it can store the number of days
					in each month.
 ============================================================================
 */
#include <stdio.h>
#define MONTHS 12
int main (void)
{
	int index;
	
	int days[MONTHS] = {31,28,31,30,31,30,31,31,30,31,30,31};
	// what about if our program will retrieve values from the array, 
	// but it won't try to write new values. then use e.g const int days[]

	for (index = 0; index <MONTHS; index++)
	{
		printf("Month %d has %2d days.\n",
					index +1,days[index] ); //  same as days[index]
    }
	
	return 0;
}
