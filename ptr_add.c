/*
============================================================================
 Name        :Abdikarim Ibrahim
 Date		 : 0904/18
 Description : we are comparing what are the mean difference btw array
				and pointer? And what is it main when we say array name
					is the addrress of the first element of the array?
 ============================================================================
 */
#include <stdio.h>
#define SIZE 4 // it is good to have sybolic integer const.

int main (void)
{
	short dates[SIZE];// array of size 4
	short *pti;
	short index;
	double bills[SIZE];
	double *ptf;

	pti = dates; // assign address of array to pointer
	ptf = bills; // assign address of array to pointer
	
	printf("%23s %15s\n","short","double");
	
	for (index = 0; index < SIZE; index++)
		printf("pointers + %d: %10p %10p\n",
					index,pti + index,ptf + index);
	return 0;
	
}

				
