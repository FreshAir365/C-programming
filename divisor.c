#include <stdio.h>
#include <stdbool.h>
int main (void)
{
	unsigned long num; // number to checked
	unsigned long div; // potential divisor
	bool isPrime;     // prime flag

	printf("Please enter an integer for the analysis;");
	printf(" Or enter q to quit.\n");

	while (scanf("%lu",&num)==1)
	{
	
		for (div = 2, isPrime = true; (div * div) <= num; div++)
		{
	
			if ((div * div) != num)
			printf("%lu is divisible by %lu and lu.\n",
					num, div, num/div);
			else
				printf("%lu is divisible by %lu.\n",
						num, div);
			isPrime = false; // number is not prime.
			
        }
		if (isPrime)
			printf("%lu is prime.\n",num);
		printf("Please enter another number for analysis;");
		printf(" Or enter q to quit.\n ");
    }
	printf("Bye.\n");

	return 0;	
	
	
}
