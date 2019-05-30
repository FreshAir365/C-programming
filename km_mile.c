/*
============================================================================
 Name        :Abdikarim Ibrahim
 Date		 : 06/13/18
 Description : This program converts kilometers to miles.
 ============================================================================
 */

#include <stdio.h>
#define ADJUST 0              // one kind of symbolic constant
int main(void)
{
    const double SCALE = 0.6214;  // another kind of symbolic constant
    double km, mile,i;
    
    printf("Enter Km to be converted: \n");
	scanf("%.2f",&km);
	i = 100 ;
    while (km < i)      /* starting the while loop */
    {                        /* start of block          */
        mile = SCALE * km + ADJUST;
        printf("%10.1f %15.2f miles\n", km, mile);
        km = km + 1.0;
    }                        /* end of block            */
    printf("That is it. You have converted \n");
    
    return 0;
}

