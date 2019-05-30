#include <stdio.h>
#include <string.h>

int main (void)
{
	char str1[10] = "Abdikarim";
	char str2[10] = " Ibrahim";
	if (sizeof(str1) >= strlen(str1) + strlen(str2) + 1)
		strcat(str1,str2);
	else
		printf("Error has occured\n");
	printf("%s\n",str1);
}

