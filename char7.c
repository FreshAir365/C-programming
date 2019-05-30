/*
============================================================================
 Name        :Abdikarim Ibrahim
 Date		 : 06/13/18
 Description : counts how many times the characters lowercase, uppercase, and others are
				encountered
 ============================================================================
 */


#include <stdio.h>
#include <ctype.h>

int main (void)
{
char ch;
int lowerC = 0;		// lowercase char count
int upperC = 0;		// upper char count
int otherC = 0; 	// other char count

while ((ch = getchar ()) != '#')
	{
		if (islower(ch))
			lowerC++;
		else if (isupper(ch))
			upperC++;
		else
			otherC++;
	}

	printf("%d lowercase, %d uppercase, %d upper",lowerC,upperC,otherC);
	
	return 0;

}

