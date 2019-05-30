/*
============================================================================
 Name        :Abdikarim Ibrahim
 Date		 : 09/10/18
 Description : indicates how we use arrays in a function. in this case 
				we use the function sum() which returns the sum of the 
				elements of an array.
 ============================================================================
 */

#include <stdio.h>
#define SIZE 10

int sum(int ar[], int n);

int main (void)
{
	int marbles[SIZE] = {20,10,5,39,4,16,19,26,31,20};
	long answer;
	answer = sum(marbles,SIZE);
	
	printf("The total number of marbles is %ld.\n",answer);
	printf("The size of marbles is %lu bytes.\n",
				sizeof marbles); // note I'm using %lu instead of %zd b/c 
	return 0;	
}

int sum(int ar[],int n) // ar is not an array itself;
						// it is a ptr to the 1st element of marbles.
{
	int i;
	int total = 0;
	
	for(i = 0; i < n; i++)
		total +=ar[i];
	printf("The size of ar is %lu bytes.\n",sizeof ar);
	
	return total;
}


