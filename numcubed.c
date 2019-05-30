#include <stdio.h>
int main(void)
{
	
	int i;
	long num;
	printf("please enter the maximum number to cubed: \n");
	scanf("%ld",&num);
	for(i = 0; i<= num; i++)
	{
		printf("num \t  num cubed \n");
		printf("%i  \t %i\n",i,i*i*i);
    }
	return 0;
}
