/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main(void)
{
  int number, int1, int2, value1, value2;
  
  printf("Enter a Number: ");
  scanf("%1d%1d", &int1, &int2);
  

  value1 = int1*int1*int1;
  value2 = int2*int2*int2;
  printf("%d", value1 + value2);

  return 0;
}