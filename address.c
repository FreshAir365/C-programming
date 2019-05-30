/*
============================================================================
 Name        :Abdikarim Ibrahim
 Date		 : 08/11/18
 Description : checks to see where variables are stored in mem
 ============================================================================
 */

#include <stdio.h>
void func (int variable);

int main (void)
{
	int object = 2;
	int var = 5;
	printf("in main(), object = %d and &object = %p\n",
					object, &object);
	printf("in main(), var = %d and &var = %p\n",
					var, &var);
	func(object);

	return 0;
}

void func (int var)
{
	int object = 10;
	printf("in func(), object = %d and &object = %p\n",
					object, &object);
	printf("in func(), var = %d and &var = %p\n",
					var, &var);
}
