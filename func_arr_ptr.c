/*
============================================================================
 Name        :Abdikarim Ibrahim
 Date		 : 09/10/18
 Description : A function working on an array needs to know where to start and stop.
				It uses the fact that pointer parameter is a variable,
				which mean that instead of using an index to indicate which
				element in the array to access, the function can alter the 
				value of the pionter itself, making it point to each array element in turn.
 ============================================================================
 */

#include <stdio.h>
#define SIZE 10

int sump(int * start, int * end);

int main (void)
{
	int marbles[SIZE] = {20,10,5,39,4,16,19,26,31,20};
	long answer;
	answer = sump(marbles,marbles + SIZE);
	printf("The total number of marbles is %ld.\n",answer);
	
	return 0;	
}

int sump(int * start,int * end) // ar is not an array itself;
						// it is a ptr to the 1st element of marbles.
{
	int total = 0;
	
	while (start < end)
	{
		total +=*start; // you can also write total +=*start++;
		start++; // add value to total 	
	}
	
	return total; // advance ptr to next level

}


