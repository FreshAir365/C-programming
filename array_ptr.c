/*
============================================================================
 Name        :Abdikarim Ibrahim
 Date		 : 06/28/18
 Description : This program demonstrate the concept of an array's value is the addres of 
				it first elements
 ============================================================================
 */



#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int main ()
{
	int i;
	int age [5] = {5,4,9,8,6};
	
	printf("Element \t Address \t Value \n");
	
	for (i = 0; i < 5; i++)
	{
		printf("%i \t %p \t %i \n",i,&age[i],age[i]);
    }

	printf("\nage \t %p \n",age);
	return 0;

}
