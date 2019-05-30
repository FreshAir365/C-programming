/*
============================================================================
 Name        :Abdikarim Ibrahim
 Date		 : 06/13/18
 Description : This program converts km to miles
 ============================================================================
 */
#include <stdio.h>
#define ADJUST 32.0              // one kind of symbolic constant
int main(void)
{
    const double SCALE = 1.8;  // another kind of symbolic constant
    double fahren, celc;
    
    printf("Enter the temperature: \n");
    scanf("%f",&celc);
    while (celc <10)    /* starting the while loop */
    {                        /* start of block          */
        fahren = SCALE * celc + ADJUST;
        printf("%10.1f %15.2f fahrenheit\n", celc, fahren);
        celc = celc + 1.0;
    }                        /* end of block            */
    printf("That is it.\n");
    
    return 0;
}
