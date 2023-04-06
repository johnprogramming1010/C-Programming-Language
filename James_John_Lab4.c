/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num_lines, i, j;
    printf("enter the number of lines to print: ");
    scanf("%d", &num_lines);
    if(num_lines>0){
    for(i=1; i<=num_lines; i++)
    {
        for(j=0; j<num_lines; j++)
        {
            if(j <= num_lines-i-1)
                printf(".");
            else
                printf("%d", i);
        }
        printf("\n");
    }
    }
    else{
        printf("Enter a positive number greater than zero.");
    }
    
}