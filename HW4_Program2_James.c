 /* 
Program Name: HW4_Program2.c 
Programmer: John James
Class: CS 3335 
HW: 04
Problem: 02
*/ 

#include <stdio.h>
#include <ctype.h>

#define num 50

int main(void) {
    char *pa, *pb;
    char input, msg[num] = {0};
    printf("Enter a message: ");

    pa = &msg[0];
    while ((input = tolower(getchar())) != '\n') {
        if (isalpha(input)) {
            *pa++ = input;
        }
    }

    pb = pa-1;
    pa = &msg[0];
    while (pa < &msg[0] + num) {
        if (*pa == 0) {
            break;
        }
        if (*pa != *pb) {
            printf("Not a palindrome\n\n");
            return 0;
        }
        pa++, pb--;
    }
    printf("Palindrome\n\n");

    return 0;
}