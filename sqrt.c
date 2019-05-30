#include <stdio.h>
#include <math.h>

int main (void)
{
	float a;
	float b;
	float c;
	printf("Enter the value of a:\n");
	scanf("%f",&a);
	printf("Enter the value of b:\n");
	scanf("%f",&b);
	printf("Enter the value of c:\n");
	scanf("%f",&c);
	float discriminant = sqrt( b*b -4*a*c);
	float root1 = (-b + discriminant/(2*a));
	float root2 = (-b - discriminant/(2*a));
	printf("%f\n",root1);
	printf("%f\n",root2);

	return 0;
	
}

