#include <stdio.h>

int lesser(int x, int y);
int main(void)
{
	int evil1, evil2;
	printf("Enter two integers (q to quit): \n");
	while (scanf("%d %d",&evil1,&evil2) == 2)
		{
			printf("The lesser of %d and %d is %d\n",evil1, evil2, lesser(evil1,evil2));
			printf("Enter two integers (q to quit): \n");
        }
	printf("Bye.\n");
	return 0;
}

int lesser(int n, int m)
{
	int min;
	if (n < m)
		min = n;
	else
		min = m;
	return min;
}
