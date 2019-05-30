/*
============================================================================
 Name        :Abdikarim Ibrahim
 Date		 : 08/11/18
 Description : the program show what will happen incase you didn't initialize 
				 an array
 ============================================================================
 */
#include <stdio.h>
#define SIZE 4

int main (void)
{
	int no_data[SIZE];
	int i;
	printf("%2s%14s\n",
			"i","no_data[i]");
	for (i = 0; i <SIZE; i++)
		{
			printf("%2d%14d\n",i, no_data[i]);

		}
return 0;

}
