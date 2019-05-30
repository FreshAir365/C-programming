#define MINUTES 60
#include <stdio.h>
int main (void)
{
	long long hour, min, left;
	printf("Please enter minter or 0 to exit: ");
	scanf("%lld",&min);
	while (min > 0)
	{
		hour = min/MINUTES;
		left = min%MINUTES;
		printf("hours \t minutes\n");
		printf("%lld \t %lld\n",hour,left);
		printf("Please enter minter or 0 to exit: ");
		scanf("%lld",min);
			
    }
	return 0;
}
