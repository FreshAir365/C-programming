#include <stdio.h>
#define NAME "MOORGABEY, INC."
#define ADDRESS "12700 Jidky MarnurShodog"
#define PLACE  "Moorgabey,BK 55337"
#define WIDTH 	40

void starbar(void);

int main (void)
{
	starbar();
	printf("%s\n",NAME);
	printf("%s\n",ADDRESS);
	printf("%s\n",PLACE);
	starbar();

	return 0;

}
void starbar(void)
{
	int count;
	for (count = 1; count <= WIDTH; count++)
		putchar ('=');
	putchar ('\n');
}
