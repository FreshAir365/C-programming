#include <stdio.h>
int main (void)
{
	// char str [] = "ABCDEFGH";
	
//	strcpy(&str, "xyz");
//	printf("%s",str);

	char s1 [] = "Banana ";
	char s2 [] = "Mango ";
	char s3 [] = "Papaya ";
	char s4 [60] = "";

	strcat (s4, s1);
	strcat (s4, s2);
	strcat (s4, s3);

	printf( " %s", s4);


}  



