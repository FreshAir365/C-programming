#include <stdio.h>
#define COVERAGE 350

int main (void)
{
	int sqr_ft;
	int cans;
	printf("Enter numbr of square feet to be painted:\n");
	while (scanf("%d",& sqr_ft) == 1)
	{
		cans = sqr_ft / COVERAGE;
		cans += ((sqr_ft % COVERAGE == 0 )) ? 0 : 1;
		printf("You need %d %s of paint.\n",cans,
				cans == 1 ? "can" : "cans");
		printf("Enter next value or 'q' to quit:\n");
    }
}

