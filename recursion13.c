/*
 ============================================================================
 Name        : recursion
 Author      : Abdikarim Ibrahim
 Version     :
 Copyright   : FreshAir
 Description : Write a recursive function printBinary( ) 
    		   that displays the binary representation
    		   of an integer
 ============================================================================
 */
#include <stdio.h>
void printBinary(int x);
int main( )
{
  int decimalvalue = -86;
  
  
  printf("Value = %d decimal\n", decimalvalue);

  /* Display value in binary */
  printf("Value = ");
  printBinary(decimalvalue);
  printf(" binary\n");

  return 0;
}

void printBinary(int x)
{
  if(x < 0){
    printf("-");
    printBinary(-x);
  }
  else {
    if (x > 0)
      printBinary(x/2);
    printf("%d", x%2);
  }

  return;
}

