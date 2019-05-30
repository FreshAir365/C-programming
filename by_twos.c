#define SIZE 8
#include <stdio.h>
int main (void)
{
	int by_twos[SIZE],index;
	for (index = 0; index < SIZE; index++)
	
		by_twos [index] = 2 * (index + 1);
   
	for (index = 0; index < SIZE; index++)
	
		printf("%d\n", by_twos[index]);
	printf("\n");
	return 0;
}
