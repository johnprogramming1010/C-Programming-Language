/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

void main()
{
    char result_word[20] = " ";
    char word[20];
    int num;
    printf("Enter n: ");
    scanf("%d", &num);
    for(int i=0; i<num; i++){
        printf("Input the string: ");
        scanf("%s", word);
        int word_count = 0;
        int result_count = 0;
        for(int i = 0; word[i] != '\0'; i++){
            word_count++;
        }
        for(int i = 0; result_word[i] != '\0'; i++){
            result_count++;
        }
        if(word_count > result_count){
            strcpy(result_word, word);
        }
    }
    printf("Answer: %s", result_word);
}