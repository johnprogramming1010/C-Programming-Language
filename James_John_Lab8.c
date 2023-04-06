/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int func(int num);

int main()
{
    int num = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("The Tribonacci value for %d is %d", num, func(num));
    return 0;
}

int func(int num) {
    if (num == 0){
        return 0;
    }
    if (num == 1){
        return 0;
    }
    if (num == 2){
        return 1;
    }
    if(num == 3){
        return 1;
    }
    else{
        return func(num - 1) + func(num - 2) + func(num - 3);
    }
}