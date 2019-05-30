
/*
============================================================================
 Name        :Abdikarim Ibrahim
 Date		 : 06/08/18
 Description : bases conversions
 ============================================================================
 */

#include <stdio.h>
int main(void)
{
    int x = 100;
    
    printf("dec = %d; octal = %o; hex = %x\n", x, x, x);
    
    //displays C prefixes
    printf("dec = %d; octal = %#o; hex = %#x\n", x, x, x);
    
    return 0;
}
