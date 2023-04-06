/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <ctype.h>
#define num 50

int stack[num];
int count = 0;

void push(int n){
    if(count == 50){
        printf("There's no space in the stack\n");
    }
    stack[count] = n;
    count++;
}

int pop(){
    if(count == 0){
        printf("Nothing to take from stack\n");
    }
    int min = stack[count];
    --count;
    return min;
}

int main()
{
    char expression[num];
    printf("Enter an RPN expression: ");
    fgets(expression, 50, stdin);
    
    int value = 0;
    
    for(int i = 0; i<25; i++){
        while(expression[i] != '='){    
        if(expression[i] > 47 && expression[i] < 58){//this checks if the input is a number and adds to the stack
            push(expression[i]);
        }
        else if(expression[i] = '+'){//adds the top of the stack to the next value
            pop() + pop();
        }
        else if(expression[i] = '-'){//subtracts the top of the stack to the next value
            pop() - pop();
        }
        else if(expression[i] = '*'){//multiplies the top of the stack to the next value
            pop() * pop();
        }
        else if(expression[i] = '/'){//divides the top of the stack to the next value
            pop() / pop();
        }
        }
    }    
    
    printf("Value of expression: %d", stack[count]);

    return 0;
}