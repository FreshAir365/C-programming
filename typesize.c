/*
============================================================================
 Name        :Abdikarim Ibrahim
 Date		 : 06/08/18
 Description :print out type sizes
 ============================================================================
 */

#include <stdio.h>
int main(void)
{
    /* c99 provides a %zd specifier for sizes */
    printf("Type int has a size of %d bytes.\n", sizeof(int));
    printf("Type char has a size of %d bytes.\n", sizeof(char));
    printf("Type long has a size of %d bytes.\n", sizeof(long));
    printf("Type long long has a size of %d bytes.\n",
           sizeof(long long));
    printf("Type double has a size of %d bytes.\n",
           sizeof(double));
    printf("Type long double has a size of %d bytes.\n",
           sizeof(long double));
    return 0;
}
