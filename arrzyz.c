/*
============================================================================
 Name        :Abdikarim Ibrahim
 Date		 : 08/11/18
 Description : the program shows instead of us couting the size of our array
				the computer is gonna count for us.
				sizeof give the size in bytes of an object of type following it.
 ============================================================================
 */
#include <stdio.h>
#define MONTHS 12
int main (void)
{
	int index;
	
	int days[MONTHS] = {31,28,31,30,31,30,31,31,30,31};

	for (index = 0; index < (sizeof days )/ (sizeof days[0]); index++)
	{
		printf("Month %d has %2d days.\n",
					index +1,days[index]);
    }
	
	return 0;
}


