/*
============================================================================
 Name        :Abdikarim Ibrahim
 Date		 : 09/10/18
 Description : poiter operations and what we can do to them.
 ============================================================================
 */

#include <stdio.h>

int main (void)
{
	int ar[5] = {100,200,300,400,500};
	int *ptr1, *ptr2, *ptr3;
	
	ptr1 = ar; // this is how you assign an address to a ptr
	ptr2 = &ar[2]; // this is how to dereference a ptr and take the address of a ptr
	
	printf("pointer value, dereference pointer, pointer address:\n");
	printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n",
			ptr1,*ptr1, &ptr1);

// pointer addittion.
	ptr3 = ptr1 + 4;
	printf("\nadding an int to a poiner:\n");
	printf("ptr1 + 4 = %p, *(ptr1 + 3) = %d\n",
			ptr1 + 4, *(ptr1 + 3));
}
