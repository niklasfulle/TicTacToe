// Autor: Niklas Fulle

#include <stdio.h>
#include "utils.c"
#include "print.c"

int turn = 0;
char Player1 = 'X';
char Player2 = 'O';
char field[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};

int main(int argc, char** argv){
    while(checkWinner(field, turn) != 1){
        if(turn == 0){
            printField(field);
            printf("Player 1: ");
            char input[2];
            scanf("%s", input);
            // check if input is valid
            if(checkInput(field, input) == 1){
                continue;
            }
            setTurn(field, input, Player1);
            turn = 1;
        }else{
            printField(field);
            printf("Player 2: ");
            char input[2];
            scanf("%s", input);
            // check if input is valid
            if(checkInput(field, input) == 1){
                continue;
            }
            setTurn(field, input, Player2);
            turn = 0;
        }
    }
    return 0;
}