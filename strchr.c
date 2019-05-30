#include <stdio.h>
#include <string.h>

int main (void)
{
	printf("%s\n",strchr("banana",'n'));
	printf("%s\n",strchr("banana",'b'));
	printf("%s\n",strchr("banana",'a'));
	printf("%s\n",strchr("banana",'x'));
}
