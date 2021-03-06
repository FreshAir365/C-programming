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
    unsigned int un = 3000000000; /* system with 32-bit int */
    short end = 200;              /* and 16-bit short       */
    long big = 65537;
    long long verybig = 12345678908642;
    
    //unsigned and signed have exactly same internal rep in mem on our system
    printf("un = %u and not %d\n", un, un);
    
    // C automatically expand %hd to %d when it is passed as an argument to a  function
    printf("end = %hd and %d\n", end, end);
    printf("big = %ld and not %hd\n", big, big);
    printf("verybig= %lld and not %ld\n", verybig, verybig);
    
    return 0;
}

