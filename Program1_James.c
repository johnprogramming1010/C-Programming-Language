/*
Program Name: Program1.c
Programmer: John James
Class: CS 3335
HW: 03
Problem: 01
*/ 
#include <stdio.h>
#include <ctype.h>

#define num 80

void cesar(char phrase[], int shift);
int main() {
    int shift;
    char phrase[num];
    
    printf("Enter a phrase to be encrypted: ");
    fgets(phrase, 80, stdin);
    printf("Enter shift amount: ");
    scanf("%d", &shift);
    cesar(phrase, shift);
    return 0;
     
}

void cesar(char phrase[], int shift) {
    for(int i = 0; i<num; i++){
        if (phrase[i] >= 'A' && phrase[i]<= 'Z') {
            char c = phrase[i] - 'A';
            c += shift;
            c %= 26;
            phrase[i] = c + 'A';
            
        }
        else if(phrase[i] >= 'a' && phrase[i]<= 'z'){
            char c = phrase[i] - 'a';
            c += shift;
            c %= 26;
            phrase[i] = c + 'a';
             
        }
    }
    
    printf("Encrypted message: %s", phrase);
}