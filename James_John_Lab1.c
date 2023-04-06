/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define CONVERTER 2.205

int main(void)
{
  float kilograms, weight;
  
  printf("Enter the weight in kilograms ");
  scanf("%f", &kilograms);
  weight = kilograms * CONVERTER; 

  printf("Weight in pounds: %.1f\n", weight);

  return 0;
}
