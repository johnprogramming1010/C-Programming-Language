/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h> 

int main() {  
    int number, sum = 0;

    printf("enter a number: ");
    scanf("%d",&number);
    
    for(int i = 0; i<=number; i++){
        if(i%3==0){
            sum += i;
        }
    }
    
    printf("Sum of all positive multiples of 3 that are less than %d is: %d", number, sum);

return 0;
}