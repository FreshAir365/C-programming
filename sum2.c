#include <stdio.h>

int main (void)
{
	long num;
	long sum = 0;
	
	printf("Please enter the numbers to be sum");
	printf(" Or 'q' to quit: \n");
	while (scanf("%ld",&num)==1)
	{
	   sum = sum + num;
    }

    printf("The total calculation is: %ld",sum);
	
	return 0;
}
