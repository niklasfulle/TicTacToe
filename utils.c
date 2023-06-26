// Autor: Niklas Fulle

// checks the horizontal if there is a winner
int checkHorizontal(char field[3][3]){
    for(int i = 0; i < 3; i++){
        if(field[i][0] == field[i][1] && field[i][1] == field[i][2] && field[i][0] != ' '){
            return 1;
        }
    }
    return 0;
}

// checks the vertical if there is a winner
int checkVertical(char field[3][3]){
    for(int i = 0; i < 3; i++){
        if(field[0][i] == field[1][i] && field[1][i] == field[2][i] && field[0][i] != ' '){
            return 1;
        }
    }
    return 0;
}

// checks the diagonal if there is a winner
int checkDiagonal(char field[3][3]){
    if(field[0][0] == field[1][1] && field[1][1] == field[2][2] && field[0][0] != ' '){
        return 1;
    }
    if(field[0][2] == field[1][1] && field[1][1] == field[2][0] && field[0][2] != ' '){
        return 1;
    }
    return 0;
}

// checks if there is a winner
int checkWinner(char field[3][3], int turn){
    // Check for horizontal win
    int horizontal = checkHorizontal(field);
    // Check for vertical win
    int vertical = checkVertical(field);
    // Check for diagonal win
    int diagonal = checkDiagonal(field);
    if(horizontal == 1 || vertical == 1 || diagonal == 1){
        if(turn == 1){
            printf("Winner: Player 1\n");
        }else{
            printf("Winner: Player 2\n");
        }
        return 1;
    }
    return 0;
}

// checks if the input is valid and if the field is already set
int checkInput(char field[3][3], char input[2]){
    // check if input is valid
    if(input[0] != 'A' && input[0] != 'B' && input[0] != 'C'){
        printf("Invalid input\n");
        return 1;
    }
    
    if(input[1] != '1' && input[1] != '2' && input[1] != '3'){
        printf("Invalid input\n");
        return 1; 
    }

    // check if field is already set
    int number1 = ((int)input[0] - '0') - 17;
    int number2 = (int)input[1] - '0';
    if(field[number1][number2-1] != ' '){
        printf("Field already set\n");
        return 1;
    }
    return 0;
}

// sets the turn of the player
void setTurn(char field[3][3], char input[2], char player){
    int number = (int)input[1] - '0';
    switch (input[0]){
    case 'A':
        field[0][number-1] = player;
        break;
    case 'B':
        field[1][number-1] = player;
        break;
    case 'C':
        field[2][number-1] = player;
        break;
    }
}