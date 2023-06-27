// Autor: Niklas Fulle

// prints the field
void printField(char field[3][3]){
    printf("   | 1 | 2 | 3 |\n");
    printf("   |---|---|---|\n");
    printf(" A | %c | %c | %c |\n", field[0][0], field[0][1], field[0][2]);
    printf("   |---|---|---|\n");
    printf(" B | %c | %c | %c |\n", field[1][0], field[1][1], field[1][2]);
    printf("   |---|---|---|\n");
    printf(" C | %c | %c | %c |\n", field[2][0], field[2][1], field[2][2]);
    printf("   |---|---|---|\n");
}

void printWinnerField(char field[3][3]){
    printf("   | 1 | 2 | 3 |\n");
    printf("   |---|---|---|\n");
    if(checkHorizontal(field) > 0){
        int horizontal = checkHorizontal(field);
        
        if(horizontal == 1){
            printf(" A | \033[1;32m%c\033[0m | \033[1;32m%c\033[0m | \033[1;32m%c\033[0m |\n", field[0][0], field[0][1], field[0][2]);
            printf("   |---|---|---|\n");
            printf(" B | %c | %c | %c |\n", field[1][0], field[1][1], field[1][2]);
            printf("   |---|---|---|\n");
            printf(" C | %c | %c | %c |\n", field[2][0], field[2][1], field[2][2]);
        }else if (horizontal == 2){
            printf(" A | %c | %c | %c |\n", field[0][0], field[0][1], field[0][2]);
            printf("   |---|---|---|\n");
            printf(" B | \033[1;32m%c\033[0m | \033[1;32m%c\033[0m | \033[1;32m%c\033[0m |\n", field[1][0], field[1][1], field[1][2]);
            printf("   |---|---|---|\n");
            printf(" C | %c | %c | %c |\n", field[2][0], field[2][1], field[2][2]);    
        }else if (horizontal == 3){
            printf(" A | %c | %c | %c |\n", field[0][0], field[0][1], field[0][2]);
            printf("   |---|---|---|\n");
            printf(" B | %c | %c | %c |\n", field[1][0], field[1][1], field[1][2]);
            printf("   |---|---|---|\n");
            printf(" C | \033[1;32m%c\033[0m | \033[1;32m%c\033[0m | \033[1;32m%c\033[0m |\n", field[2][0], field[2][1], field[2][2]);
        }
    }else if (checkVertical(field) > 0){
        int vertical = checkVertical(field);
        
        if(vertical == 1){
            printf(" A | \033[1;32m%c\033[0m | %c | %c |\n", field[0][0], field[0][1], field[0][2]);
            printf("   |---|---|---|\n");
            printf(" B | \033[1;32m%c\033[0m | %c | %c |\n", field[1][0], field[1][1], field[1][2]);
            printf("   |---|---|---|\n");
            printf(" C | \033[1;32m%c\033[0m | %c | %c |\n", field[2][0], field[2][1], field[2][2]);
        }else if (vertical == 2){
            printf(" A | %c | \033[1;32m%c\033[0m | %c |\n", field[0][0], field[0][1], field[0][2]);
            printf("   |---|---|---|\n");
            printf(" B | %c | \033[1;32m%c\033[0m | %c |\n", field[1][0], field[1][1], field[1][2]);
            printf("   |---|---|---|\n");
            printf(" C | %c | \033[1;32m%c\033[0m | %c |\n", field[2][0], field[2][1], field[2][2]);    
        }else if (vertical == 3){
            printf(" A | %c | %c | \033[1;32m%c\033[0m |\n", field[0][0], field[0][1], field[0][2]);
            printf("   |---|---|---|\n");
            printf(" B | %c | %c | \033[1;32m%c\033[0m |\n", field[1][0], field[1][1], field[1][2]);
            printf("   |---|---|---|\n");
            printf(" C | %c | %c | \033[1;32m%c\033[0m |\n", field[2][0], field[2][1], field[2][2]);
        }
    }else if (checkDiagonal(field) > 0){
        int diagonal = checkDiagonal(field);
        
        if(diagonal == 1){
            printf(" A | ");
            printf("\033[1;32m%c\033[0m", field[0][0]);
            printf(" | %c | %c |\n", field[0][1], field[0][2]);
            printf("   |---|---|---|\n");
            printf(" B | %c | ", field[1][0]);
            printf("\033[1;32m%c\033[0m", field[1][1]);
            printf(" | %c |\n", field[1][2]);
            printf("   |---|---|---|\n");
            printf(" C | %c | %c | ", field[2][0], field[2][1]);
            printf("\033[1;32m%c\033[0m |\n", field[2][2]);
        }else if(diagonal == 2){
            printf(" A | %c | %c | ", field[0][0], field[0][1]);
            printf("\033[1;32m%c\033[0m |\n", field[0][2]);
            printf("   |---|---|---|\n");
            printf(" B | %c | ", field[1][0]);
            printf("\033[1;32m%c\033[0m", field[1][1]);
            printf(" | %c |\n", field[1][2]);
            printf("   |---|---|---|\n");
            printf(" C | ");
            printf("\033[1;32m%c\033[0m", field[2][0]);
            printf(" | %c | %c |\n", field[2][1], field[2][2]);
        }
    }
    printf("   |---|---|---|\n");
}