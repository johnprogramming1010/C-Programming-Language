/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int computeFactorial(int n);
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    if(n>=0){
        int value = computeFactorial(n);
        printf("The factorial of %d is %d", n, value);
    }
    else{
        printf("Enter a value of n greater than 0.");
    }

    return 0;
}

int computeFactorial(int n){
    int value = 1;
        for (int i = 1; i <= n; ++i) {
            value *= i;
        }
    return value;
}