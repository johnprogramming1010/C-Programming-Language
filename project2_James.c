/* 
Program Name: Project2_JohnJames.c
Programmer: John James
Class: CS 3335
Project: 02
*/ 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void setBoard(int *);
void setComputerBoard(int *);
int playGame(int *, int *);

int main()
{
    int H[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int M[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    setBoard(H);
    setComputerBoard(M);
    int value = playGame(H, M);
    if(value == 0){
        printf("\nComputer Wins!");
    }
    if(value == 1){
        printf("\nHuman Wins!");
    }
   if(value == 2){
        printf("\nTie!");
    }
    return 0;
}

void setBoard(int *H){
    int position = 0;
    printf("Enter a position from 0-9: ");
    scanf("%d", &position);
    H[position] = 1;
}

void setComputerBoard(int *M){
    srand((unsigned) time(NULL));    
    int p = rand()%10;
    M[p] = 1;
}

int playGame(int *H, int *M){
    char H_Board[11] = "**********";
    char M_Board[11] = "**********";
    int h_value = 0;
    int c_value = 0;
    int count = 0;
    for(int i = 0; i<10; i++){
        if(H[i] == 1){
            count = i;
        }
    }
    
    while(h_value == 0 && c_value == 0){
        //computer guess
        int computer_Guess = rand()%10;
        printf("\nComputer guesses %d", computer_Guess);
        H_Board[count] = 'S';
        if(H[computer_Guess] == 1){
            H_Board[computer_Guess] = 'H';
            printf("\nHIT!");
            c_value = 1;
        }
        else{
            H_Board[computer_Guess] = 'M';
            printf("\nMISS!");
        }
            
        // human guess
        int human_Guess = 0;
        printf("\nEnter guess between 0-9: ");
        scanf("%d", &human_Guess);
        printf("You guessed %d", human_Guess);
        
        if(M[human_Guess] == 1){
            printf("\nHIT!");
            M_Board[human_Guess] = 'H';
            h_value = 1;
        }
        else{ 
            printf("\nMISS!");
            M_Board[human_Guess] = 'M';
        }
        //prints out both boards
        printf("\nHuman Board:\n0123456789\n");
        printf("%s", H_Board);
        printf("\nComputer Board:\n0123456789\n");
        printf("%s", M_Board);
    }
    int value = 0;
    if(c_value>0 && h_value==0){
        value = 0;
    }

    if(h_value>0 && c_value==0){
        value = 1;
    }

    if(c_value>0 && h_value>0){
            value = 2;
    }
return value;
}