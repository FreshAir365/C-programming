/*
============================================================================
 Name        :Abdikarim Ibrahim
 Date		 : 06/13/18
 Description : finding printf()'s return value
 ============================================================================
 */

#include <stdio.h>
int main(void)
{
    int bph2o = 212;
    int rv;// return value
    
    rv = printf("%d F is water's boiling point.\n", bph2o);
    printf("The printf() function printed %d characters.\n",
           rv);// note that the count includes all the print characters, including the spaces and unseen '\o'
}
