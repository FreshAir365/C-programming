#include <stdio.h>
#include <string.h>

int main (void)
{
	int i;
	printf("%i\n", strlen(""));
	printf("%i\n", strlen("Abdikarim"));
 	
	char s1[] = "ABCDEFGH";
	char s2[] = "MNOP";
	printf("%i\n",sizeof(s1));
	printf("%i\n", strlen(s2)+1);
	//printf("%i\n",sizeof(s2));
	if (sizeof(s1) >= strlen(s2)+1)
		strcpy(s1,s2);
	else
		printf("Error - string too long to copy");
	printf("%s\n",s1);
}


