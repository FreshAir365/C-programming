/*
============================================================================
 Name        :Abdikarim Ibrahim
 Date		 : 08/11/18
 Description : Recursion often can be usesd where loops can be used. 
				Recursive sol. tend to be more elegant and less efficient than loops solutions.
 ============================================================================
 */


#include <stdio.h>

void up_down (int n);

int main (void)
{
	up_down(1);
	return 0;
}

void up_down (int n)
{
	printf("Level %d: n location %p\n", n, &n);
	if (n < 4)
		up_down(n+1);
	printf("Level %d: n location %p\n", n, &n);
}
